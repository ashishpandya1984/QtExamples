#ifndef ROASOURCEDROPDOWNITEM_H
#define ROASOURCEDROPDOWNITEM_H

#include "roasourceitem.h"

class ROASourceDropDownItem : public ROASourceItem
{
public:
    ROASourceDropDownItem(  const QString& value, const int& row, const int& col  );

    virtual ~ROASourceDropDownItem();

    QWidget* getItemWidget();
};

#endif // ROASOURCEDROPDOWNITEM_H
