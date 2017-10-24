#ifndef ROASOURCECHECKABLEITEM_H
#define ROASOURCECHECKABLEITEM_H

#include "roasourceitem.h"

class ROASourceCheckableItem : public ROASourceItem
{
    Q_OBJECT

public:
    ROASourceCheckableItem( const QString& value, const int& row, const int& col);

    ~ROASourceCheckableItem();

    QWidget* getItemWidget();

private slots:
    void radioClicked();

    void selectionChanged( const QModelIndex index );
};


#endif // ROASOURCECHECKABLEITEM_H
