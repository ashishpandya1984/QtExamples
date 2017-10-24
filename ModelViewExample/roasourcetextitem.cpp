#include "roasourcetextitem.h"

ROASourceTextItem::ROASourceTextItem(const QString &value, const int &row, const int &col)
    : ROASourceItem (value, ROASourceItem::ITEM_TEXT, row, col)
{
}

ROASourceTextItem::~ROASourceTextItem()
{
}
