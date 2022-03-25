
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
    MEMORY_POS = 0,
    BACKUP_FILE = 1,
    MEMORY_SIZE = 2
};
#define DATA_COLUMN         (MEMORY_POS) 


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
        return getTreeWidgetItemPath(parent) + "/" + item->text(MEMORY_POS);
    else
        return item->text(MEMORY_POS);
}


void CustomVarCtl::setWidget(QTreeWidget *autoWidget)
{
    m_customWidget = autoWidget;

    m_textColor = autoWidget->palette().color(QPalette::WindowText);
    
        //
    m_customWidget->setColumnCount(3);
    m_customWidget->setColumnWidth(MEMORY_POS, 120);
    m_customWidget->setColumnWidth(BACKUP_FILE, 140);
    QStringList names;
    names += "Memory start";
    names += "Objfile";
    names += "Size";
    m_customWidget->setHeaderLabels(names);
    connect(m_customWidget, SIGNAL(itemDoubleClicked ( QTreeWidgetItem * , int  )), this,
                            SLOT(onAutoWidgetItemDoubleClicked(QTreeWidgetItem *, int )));
    connect(m_customWidget, SIGNAL(itemExpanded ( QTreeWidgetItem * )), this,
                            SLOT(onAutoWidgetItemExpanded(QTreeWidgetItem * )));
    connect(m_customWidget, SIGNAL(itemCollapsed ( QTreeWidgetItem *  )), this,
                            SLOT(onAutoWidgetItemCollapsed(QTreeWidgetItem * )));

    m_customWidget->setContextMenuPolicy(Qt::NoContextMenu);

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
}


void CustomVarCtl::onAutoWidgetItemDoubleClicked(QTreeWidgetItem *item, int column)
{
}

QString CustomVarCtl::getWatchMemPos(QTreeWidgetItem* item)
{
    return item->data(DATA_COLUMN, Qt::UserRole).toString();
}

void CustomVarCtl::ICore_onCoreMemChanged(CoreMemRegion &region)
{
    QTreeWidget* memRegWidget = m_customWidget;
    AutoSignalBlocker autoBlocker(m_customWidget);

    //
    QTreeWidgetItem* rootItem = memRegWidget->invisibleRootItem();

    debugMsg("Adding '%s'", stringToCStr(name));

    // Create the item
    QStringList elementsList;
    elementsList += QStringLiteral("0x%1").arg(region.getPointerAddress(), 6, 16, QLatin1Char('0'));
    elementsList += region.getBackupFile();
    elementsList += QString::number(region.getSize());
    QTreeWidgetItem *item = new QTreeWidgetItem(elementsList);
    // item->setData(DATA_COLUMN, Qt::UserRole, region.getPointerAddress());
    item->setFlags(Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    item->setChildIndicatorPolicy(QTreeWidgetItem::DontShowIndicatorWhenChildless);
    item->setDisabled(false);
    
    rootItem->addChild(item);

    // if(dispInfo.isExpanded)
    // {
    //     // TODO expandir info region de memoria si fuera a añadir datos
        
    //     memRegWidget->expandItem(item);
    // }
}

void CustomVarCtl::clear()
{
    QTreeWidget *autoWidget = m_customWidget;
    debugMsg("%s()", __func__);
    autoWidget->clear();
}

void CustomVarCtl::setConfig(Settings *cfg)
{
    m_cfg = *cfg;
}