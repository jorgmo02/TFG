/*
 * Copyright (C) 2014-2017 Johan Henriksson.
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license.  See the LICENSE file for details.
 */

#ifndef FILE__CUSTOM_VAR_CTL_H
#define FILE__CUSTOM_VAR_CTL_H

#include <QString>
#include <QTreeWidget>
#include <QMenu>
#include <QKeyEvent>


#include "core.h"
#include "varctl.h"
#include "settings.h"

/**
* @brief customclass copying autovarctl.
*/
class CustomVarCtl : public VarCtl
{
    Q_OBJECT

public:
    CustomVarCtl();
    
    void setWidget(QTreeWidget *autoWidget);

    void setConfig(Settings *cfg);

    void ICore_onStateChanged(ICore::TargetState state);
    void ICore_onCoreMemChanged(CoreMemRegion &region);
    
    void clear();
public slots:
    void onAutoWidgetItemDoubleClicked(QTreeWidgetItem *item, int column);
    void onAutoWidgetItemExpanded(QTreeWidgetItem *item );
    void onAutoWidgetItemCollapsed(QTreeWidgetItem *item);

private:
    QString getWatchMemPos(QTreeWidgetItem* item);

    QString getTreeWidgetItemPath(QTreeWidgetItem *item);

private:
    QTreeWidget *m_customWidget;
    
    VarCtl::DispInfoMap m_customVarDispInfo;
    Settings m_cfg;
    QColor m_textColor; //!< Color to use for text in the widget
};



#endif // FILE__CUSTOM_VAR_CTL_H

