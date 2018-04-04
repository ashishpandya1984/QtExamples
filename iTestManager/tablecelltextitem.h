#ifndef ROASOURCETEXTITEM_H
#define ROASOURCETEXTITEM_H

#include "tablecelldataitem.h"

class TableCellTextItem : public TableCellDataItem
{
public:
    TableCellTextItem( const QString& value, const int& row, const int& col);

    virtual ~TableCellTextItem();
};

#endif // ROASOURCETEXTITEM_H
