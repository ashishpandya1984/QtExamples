#ifndef ROASOURCECHECKABLEITEM_H
#define ROASOURCECHECKABLEITEM_H

#include "tablecelldataitem.h"

class TableCellCheckableItem : public TableCellDataItem
{
    Q_OBJECT

public:
    TableCellCheckableItem( const QString& value, const int& row, const int& col );

    virtual ~TableCellCheckableItem();

    QWidget* getItemWidget();

private slots:
    void radioClicked();

    void selectionChanged( const QModelIndex index );
};


#endif // ROASOURCECHECKABLEITEM_H
