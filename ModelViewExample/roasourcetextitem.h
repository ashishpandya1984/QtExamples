#ifndef ROASOURCETEXTITEM_H
#define ROASOURCETEXTITEM_H

#include "roasourceitem.h"

class ROASourceTextItem : public ROASourceItem
{
public:
    ROASourceTextItem( const QString& value, const int& row, const int& col);

    ~ROASourceTextItem();
};

#endif // ROASOURCETEXTITEM_H
