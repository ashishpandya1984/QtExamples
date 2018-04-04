#ifndef TABLECELLACTIONBUTTONITEM_H
#define TABLECELLACTIONBUTTONITEM_H

#include <QPushButton>
#include "tablecelldataitem.h"

class TableCellActionButtonItem : public TableCellDataItem
{
    Q_OBJECT

public:
    TableCellActionButtonItem(const QString &value, const int &row, const int &col);

    ~TableCellActionButtonItem();

    QWidget* getItemWidget();

    void setActionIcon(QPushButton *button);

private slots:    
    void actionButtonClicked();
};

#endif // TABLECELLACTIONBUTTONITEM_H
