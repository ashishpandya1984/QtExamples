#ifndef ROADATAMODEL_H
#define ROADATAMODEL_H

#include <QString>
#include <QList>
#include "tablecelldataitem.h"

class TableDataCollectionAdaptor
{
public:
    TableDataCollectionAdaptor();

    virtual ~TableDataCollectionAdaptor();

    virtual void addSource(void* data) = 0;

    TableCellDataItem* getItemAtLocation( const int& row, const int& col );

    int getSourceCount() const;

protected:
    QList< QList< TableCellDataItem* > > m_dataCollection;
};

#endif // ROADATAMODEL_H
