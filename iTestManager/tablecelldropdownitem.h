#ifndef ROASOURCEDROPDOWNITEM_H
#define ROASOURCEDROPDOWNITEM_H

#include "tablecelldataitem.h"

class TableCellDropDownItem : public TableCellDataItem
{
public:
    TableCellDropDownItem(const QString& value, const int& row, const int& col  , const QStringList options);

    virtual ~TableCellDropDownItem();

    QWidget* getItemWidget();

protected:
    QStringList m_dropDownOptions;
};

#endif // ROASOURCEDROPDOWNITEM_H
