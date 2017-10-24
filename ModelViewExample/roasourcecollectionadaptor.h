#ifndef ROADATAMODEL_H
#define ROADATAMODEL_H

#include <QString>
#include <QList>
#include "roasourceitem.h"

class ROASourceCollectionAdaptor
{
public:
    ROASourceCollectionAdaptor();

    void addSource(const QString& sourceName, const QString& sourceValue );

    ROASourceItem* getItemAtLocation( const int& row, const int& col );

    int getSourceCount() const;

protected:
    QList< QList< ROASourceItem* > > m_dataCollection;
};

#endif // ROADATAMODEL_H
