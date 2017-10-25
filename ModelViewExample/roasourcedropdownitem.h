#ifndef ROASOURCEDROPDOWNITEM_H
#define ROASOURCEDROPDOWNITEM_H

#include "roasourceitem.h"

class ROASourceDropDownItem : public ROASourceItem
{
public:
    ROASourceDropDownItem(const QString& value, const int& row, const int& col  , const QStringList options);

    virtual ~ROASourceDropDownItem();

    QWidget* getItemWidget();

protected:
    QStringList m_dropDownOptions;
};

#endif // ROASOURCEDROPDOWNITEM_H
