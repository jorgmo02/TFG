
//#define ENABLE_DEBUGMSG

/*
 * Copyright (C) 2014-2017 Johan Henriksson.
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 */

#include "customvarctl.h"

#include "log.h"
#include "util.h"
#include "core.h"
#include "memorydialog.h"
#include "autosignalblocker.h"


#include <iostream>

enum
{
    COLUMN_NAME = 0,
    COLUMN_VALUE = 1,
    COLUMN_TYPE = 2
};
#define DATA_COLUMN         (COLUMN_NAME) 


CustomVarCtl::CustomVarCtl()
    : m_customWidget(0)
    ,m_textColor(Qt::black)
{


}


void CustomVarCtl::ICore_onStateChanged(ICore::TargetState state)
{
    if(state == ICore::TARGET_STARTING || state == ICore::TARGET_RUNNING)
        m_customWidget->setEnabled(false);
    else
        m_customWidget->setEnabled(true);
    
}
    
QString CustomVarCtl::getTreeWidgetItemPath(QTreeWidgetItem *item)
{
    QTreeWidgetItem *parent = item->parent();
    if(parent)
        return getTreeWidgetItemPath(parent) + "/" + item->text(COLUMN_NAME);
    else
        return item->text(COLUMN_NAME);
}


void CustomVarCtl::setWidget(QTreeWidget *autoWidget)
{
    m_customWidget = autoWidget;

    m_textColor = autoWidget->palette().color(QPalette::WindowText);
    
        //
    m_customWidget->setColumnCount(3);
    m_customWidget->setColumnWidth(COLUMN_NAME, 120);
    m_customWidget->setColumnWidth(COLUMN_VALUE, 140);
    QStringList names;
    names += "Memory position";
    names += "Backup file";
    names += "Size";
    m_customWidget->setHeaderLabels(names);
    connect(m_customWidget, SIGNAL(itemChanged ( QTreeWidgetItem * ,int)), this, 
                            SLOT(onAutoWidgetCurrentItemChanged(QTreeWidgetItem * ,int)));
    connect(m_customWidget, SIGNAL(itemDoubleClicked ( QTreeWidgetItem * , int  )), this,
                            SLOT(onAutoWidgetItemDoubleClicked(QTreeWidgetItem *, int )));
    connect(m_customWidget, SIGNAL(itemExpanded ( QTreeWidgetItem * )), this,
                            SLOT(onAutoWidgetItemExpanded(QTreeWidgetItem * )));
    connect(m_customWidget, SIGNAL(itemCollapsed ( QTreeWidgetItem *  )), this,
                            SLOT(onAutoWidgetItemCollapsed(QTreeWidgetItem * )));

    m_customWidget->setContextMenuPolicy(Qt::NoContextMenu);

}

/**
 * @brief Returns the address of the data the variable points to or the actual variable.
 */
quint64 CustomVarCtl::getAddress(VarWatch &w)
{
    Core &core = Core::getInstance();
    if(w.hasPointerAddress())
    {
        return w.getPointerAddress();
    }
    return core.getAddress(w);
}

void CustomVarCtl::onAutoWidgetItemCollapsed(QTreeWidgetItem *item)
{
    QString varPath = getTreeWidgetItemPath(item);
    if(m_customVarDispInfo.contains(varPath))
    {
        VarCtl::DispInfo &dispInfo = m_customVarDispInfo[varPath];
        dispInfo.isExpanded = false;
    }

}


void CustomVarCtl::onAutoWidgetItemExpanded(QTreeWidgetItem *item)
{
    QString varPath = getTreeWidgetItemPath(item);
    debugMsg("%s(varPath:'%s')", __func__, stringToCStr(varPath));
    if(m_customVarDispInfo.contains(varPath))
    {
        VarCtl::DispInfo &dispInfo = m_customVarDispInfo[varPath];
        dispInfo.isExpanded = true;

    }
    else
    assert(0);

    Core &core = Core::getInstance();
    //QTreeWidget *varWidget = m_customWidget;

    // Get watchid of the item
    QString watchId = getWatchId(item);
    

    // Get the children
    //if(!watchId.isEmpty())
    core.gdbExpandVarWatchChildren(watchId);
    

}


void CustomVarCtl::onAutoWidgetItemDoubleClicked(QTreeWidgetItem *item, int column)
{
    QTreeWidget *varWidget = m_customWidget;

    if(column == COLUMN_VALUE)
        varWidget->editItem(item,column);
    else
    {
        AutoSignalBlocker autoBlocker(m_customWidget);

        QString varName = item->text(COLUMN_NAME);
        QString watchId = getWatchId(item);
        QString varPath = getTreeWidgetItemPath(item);
             
        if(m_customVarDispInfo.contains(varPath))
        {
            VarCtl::DispInfo &dispInfo = m_customVarDispInfo[varPath];
            {
                
                if(dispInfo.dispFormat == VarCtl::DISP_DEC)
                {
                    dispInfo.dispFormat = VarCtl::DISP_HEX;
                }
                else if(dispInfo.dispFormat == VarCtl::DISP_HEX)
                {
                    dispInfo.dispFormat = VarCtl::DISP_BIN;
                }
                else if(dispInfo.dispFormat == VarCtl::DISP_BIN)
                {
                    dispInfo.dispFormat = VarCtl::DISP_CHAR;
                }
                else if(dispInfo.dispFormat == VarCtl::DISP_CHAR)
                {
                    dispInfo.dispFormat = VarCtl::DISP_DEC;
                }

                QString valueText = getDisplayString(watchId, varPath);
                
                item->setText(1, valueText);
            }
        }
    }
}


void CustomVarCtl::ICore_onWatchVarChanged(VarWatch &watch)
{
    Q_UNUSED(watch);
}

QString CustomVarCtl::getWatchId(QTreeWidgetItem* item)
{
    return item->data(DATA_COLUMN, Qt::UserRole).toString();
}


/**
* @brief Locates a treeitem based on a watchid.
* @param watchId    The id.
* @return The found item or NULL if no was found.
*/
QTreeWidgetItem* CustomVarCtl::priv_findItemByWatchId(QString watchId)
{
    QTreeWidgetItem *item = NULL;
    QTreeWidget *varWidget = m_customWidget;


    //
    QTreeWidgetItem * rootItem = varWidget->invisibleRootItem();
    QString thisWatchId;
    QStringList watchIdParts = watchId.split('.');
    for(int partIdx = 0; partIdx < watchIdParts.size();partIdx++)
    {
        // Get the watchid to look for
        if(thisWatchId != "")
            thisWatchId += ".";
        thisWatchId += watchIdParts[partIdx];

        // Look for the item with the specified watchId
        QTreeWidgetItem* foundItem = NULL;
        for(int i = 0;foundItem == NULL && i < rootItem->childCount();i++)
        {
            QTreeWidgetItem* item =  rootItem->child(i);
            QString itemKey = item->data(DATA_COLUMN, Qt::UserRole).toString();

            if(thisWatchId == itemKey)
            {
                foundItem = item;
            }
        }

        // This watch belonged to the AutoWidget?
        if(partIdx == 0 && foundItem == NULL)
        {
            return NULL;
        }

        if(foundItem == NULL)
            return NULL;
            
        item = foundItem;
        rootItem = foundItem;
    }
    
    return item;
    
}



void CustomVarCtl::ICore_onCustomVarChildAdded(CoreMemRegion &region)
{
    Core &core = Core::getInstance();
    QTreeWidget *memRegWidget = m_customWidget;
    AutoSignalBlocker autoBlocker(m_customWidget);

    //
    QTreeWidgetItem * rootItem = memRegWidget->invisibleRootItem();
    
    
    // quint64 getPointerAddress() { return m_address; };
    // QString getBackupFile() const { return m_backupfile; };
    // quint64 getSize() { return m_size; };


    //     // Look for the item with the specified watchId
    //     QTreeWidgetItem* foundItem = NULL;
    //     for(int i = 0;foundItem == NULL && i < rootItem->childCount();i++)
    //     {
    //         QTreeWidgetItem* item =  rootItem->child(i);
    //         QString itemKey = getWatchId(item);

    //         if(thisWatchId == itemKey)
    //         {
    //             foundItem = item;
    //         }
    //     }

    //     // This watch belonged to the WatchWidget?
    //     if(partIdx == 0 && foundItem == NULL)
    //     {
    //         return;
    //     }
        
    //     // Did not find one?
    //     QTreeWidgetItem *item;
    //     if(foundItem == NULL)
    //     {
    //         debugMsg("Adding '%s'", stringToCStr(name));

    //         // Create the item
    //         QStringList nameList;
    //         nameList += name;
    //         nameList += "";
    //         nameList += varType;
    //         item = new QTreeWidgetItem(nameList);
    //         item->setData(DATA_COLUMN, Qt::UserRole, thisWatchId);
    //         item->setFlags(Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    //         rootItem->addChild(item);
    //         rootItem = item;

    //         rootItem->setChildIndicatorPolicy(QTreeWidgetItem::DontShowIndicatorWhenChildless);

            
        
    //     }
    //     else
    //     {
    //         item = foundItem;
    //         rootItem = foundItem;
    //     }

    //     // The last part of the id?
    //     if(partIdx+1 == watchIdParts.size())
    //     {
    //         // Update the text
    //         QString varPath = getTreeWidgetItemPath(item);
    //         VarCtl::DispInfo dispInfo;
    //         if(m_customVarDispInfo.contains(varPath) == false)
    //         {
    //             dispInfo.dispFormat = DISP_NATIVE;
    //             dispInfo.isExpanded = false;

    //             debugMsg("Adding '%s'", stringToCStr(varPath));


    //             m_customVarDispInfo[varPath] = dispInfo;
    //         }
    //         else
    //         {
    //             dispInfo = m_customVarDispInfo[varPath];
    //         }
    //         QString valueString = getDisplayString(watchId, varPath);
  
    //         bool enable = inScope;

    //         if(!enable)
    //             item->setDisabled(true);
    //         else
    //             item->setDisabled(false);
            

    //         item->setText(COLUMN_VALUE, valueString);

    //         // Color the text based on if the value is different
    //         VarCtl::DispInfo &newDispInfo = m_customVarDispInfo[varPath];
    //         QBrush b;
    //         if(newDispInfo.lastData != valueString)
    //             b = QBrush(Qt::red);
    //         else
    //             b = m_textColor;
    //         item->setForeground(COLUMN_VALUE,b);
    //         newDispInfo.lastData = valueString;


    //         if(dispInfo.isExpanded)
    //         {
    //             // TODO expandir info region de memoria
                
    //             memRegWidget->expandItem(item);
    //         }
    //     }
    // }

    
}


void CustomVarCtl::ICore_onLocalVarChanged(QStringList varNames)
{
    debugMsg("%s()", __func__);

    clear();

    for(int i = 0;i < varNames.size();i++)
        addNewWatch(varNames[i]);

    std::cout << "LOCAL VAR CHANGED" << std::endl;
}

void CustomVarCtl::ICore_onMemoryMapChanged()
{
    std::cout << "MEMORY MAP CHANGED" << std::endl;
}

/**
 * @brief Returns the value text to show for an item.
 * @param varPath    The path to the variable (Eg: "myStruct/var2")   
 */
QString CustomVarCtl::getDisplayString(QString watchId, QString varPath)
{
    QString displayValue;
    Core &core = Core::getInstance();

    //debugMsg("%s(watchId:'%s' varPath:'%s')", __func__, qPrintable(watchId), qPrintable(varPath));

    // Create value if not exist
    if(!m_customVarDispInfo.contains(varPath))
    {
        VarCtl::DispInfo dispInfo;
        dispInfo.dispFormat = DISP_NATIVE;
        dispInfo.isExpanded = false;
        m_customVarDispInfo[varPath] = dispInfo;
    }

    VarWatch *watch = NULL;
    if(!watchId.isEmpty())
        watch = core.getVarWatchInfo(watchId);
    if(watch)
    {
        VarCtl::DispInfo &dispInfo = m_customVarDispInfo[varPath];

        switch(dispInfo.dispFormat)
        {
            default:
            case DISP_NATIVE:
                displayValue = watch->getValue(CoreVar::FMT_NATIVE);break;
            case DISP_DEC:
                displayValue = watch->getValue(CoreVar::FMT_DEC);break;
            case DISP_BIN:
                displayValue = watch->getValue(CoreVar::FMT_BIN);break;
            case DISP_HEX:
                displayValue = watch->getValue(CoreVar::FMT_HEX);break;
            case DISP_CHAR:
                displayValue = watch->getValue(CoreVar::FMT_CHAR);break;
        }

    }
    return displayValue;
}

void CustomVarCtl::clear()
{
    QTreeWidget *autoWidget = m_customWidget;
    QTreeWidgetItem *rootItem = m_customWidget->invisibleRootItem();

    debugMsg("%s()", __func__);

    // Get all items
    QList<QTreeWidgetItem *>items;
    for(int i =0;i < rootItem->childCount();i++)
    {
        QTreeWidgetItem *item = rootItem->child(i);

        items.push_back(item);
    }
    

    // Loop through the items
    while(!items.isEmpty())
    {
        QTreeWidgetItem *item = items.takeFirst();
    
        // Delete the item
        Core &core = Core::getInstance();
        QString watchId = getWatchId(item);
        if(watchId != "")
        {
            //debugMsg("calling gdbRemoveVarWatch('%s')", stringToCStr(watchId));
            core.gdbRemoveVarWatch(watchId);
        }
    }

    autoWidget->clear();

}



void CustomVarCtl::setConfig(Settings *cfg)
{
    m_cfg = *cfg;
}

void CustomVarCtl::onAutoWidgetCurrentItemChanged( QTreeWidgetItem * current, int column )
{
    //QTreeWidget *varWidget = m_customWidget;
    Core &core = Core::getInstance();
    QString oldKey = getWatchId(current);

    std::cout << "OLD KEY: " << stringToCStr(oldKey) << std::endl;
    
    if(column != COLUMN_VALUE)
        return;
        
    AutoSignalBlocker autoBlocker(m_customWidget);

    //debugMsg("%s(key:'%s')", __func__, qPrintable(oldKey));
    
    
    VarWatch *watch = NULL;
    watch = core.getVarWatchInfo(oldKey);
    if(watch)
    {
        QString oldValue  = watch->getValue();
        QString varPath = getTreeWidgetItemPath(current);
        QString oldValueText = getDisplayString(oldKey, varPath);
        QString newValue = current->text(COLUMN_VALUE);

        if (oldValueText != newValue)
        {
            if(core.changeWatchVariable(oldKey, newValue))
            {
                current->setText(COLUMN_VALUE, oldValue);
            }
        }
    }


}




/**
 * @brief Change display format for the currently selected items.
 */
void CustomVarCtl::selectedChangeDisplayFormat(VarCtl::DispFormat fmt)
{
    AutoSignalBlocker autoBlocker(m_customWidget);

    // Loop through the selected items.
    QList<QTreeWidgetItem *> items = m_customWidget->selectedItems();
    for(int i =0;i < items.size();i++)
    {
        QTreeWidgetItem *item = items[i];
    
        QString varPath = getTreeWidgetItemPath(item);
        QString varName = item->text(COLUMN_NAME);
        QString watchId = getWatchId(item);
        
        
        if(m_customVarDispInfo.contains(varPath))
        {
            VarCtl::DispInfo &dispInfo = m_customVarDispInfo[varPath];
            {
                dispInfo.dispFormat = fmt;
           
                QString valueText = getDisplayString(watchId, varPath);

                item->setText(COLUMN_VALUE, valueText);
            }
        }
        else
        {
            debugMsg("Var path:%s not found", stringToCStr(varPath));
        }
    }

}






/**
 * @brief Adds a new watch item
 * @param varName    The expression to add as a watch.
 */
void CustomVarCtl::addNewWatch(QString varName)
{
    QString newName = varName;
    Core &core = Core::getInstance();
    
    //debugMsg("%s('%s')", __func__, stringToCStr(varName));

    VarWatch *watch = NULL;

    if(core.gdbAddVarWatch(newName, &watch) == 0)
    {
        QString watchId = watch->getWatchId();
        QString varType = watch->getVarType();

        bool hasChildren = watch->hasChildren();

        QTreeWidget *varWidget = m_customWidget;

// Create a new dummy item
        QTreeWidgetItem *item;
        QStringList names;
        names += varName;
        item = new QTreeWidgetItem(names);
        item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable);
        varWidget->addTopLevelItem(item);


        QTreeWidgetItem *current = item;
        

        
        if(hasChildren)
            current->setChildIndicatorPolicy(QTreeWidgetItem::ShowIndicator);

        QString varPath = getTreeWidgetItemPath(current);
        QString value  = getDisplayString(watchId, varPath);
        if(!m_customVarDispInfo.contains(varPath))
        {
            VarCtl::DispInfo newDispInfo;
            newDispInfo.dispFormat = DISP_NATIVE;

            debugMsg("Adding '%s'", stringToCStr(varPath));
            m_customVarDispInfo[varPath] = newDispInfo;
        }

        VarCtl::DispInfo &dispInfo = m_customVarDispInfo[varPath];
            
    
        current->setData(DATA_COLUMN, Qt::UserRole, watchId);
        current->setText(COLUMN_VALUE, value);
        current->setText(COLUMN_TYPE, varType);

        // Set color based on if the value has changed
        QBrush b;
        if(dispInfo.lastData != value)
            b = QBrush(Qt::red);
        else
            b = m_textColor;
        current->setForeground(COLUMN_VALUE,b);
        dispInfo.lastData = value;

        

        //
        if(m_customVarDispInfo.contains(varPath))
        {
            if(m_customVarDispInfo[varPath].isExpanded)
            {
                m_customWidget->expandItem(current);
            }
        }
    }
}