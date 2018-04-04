#include "tablecelltextitem.h"

TableCellTextItem::TableCellTextItem(const QString &value, const int &row, const int &col)
    : TableCellDataItem (value, TableCellDataItem::ITEM_TEXT, row, col)
{
}

TableCellTextItem::~TableCellTextItem()
{
}
