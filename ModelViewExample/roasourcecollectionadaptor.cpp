#include "roasourcecollectionadaptor.h"
#include "roasourcecheckableitem.h"
#include "roasourcetextitem.h"

ROASourceCollectionAdaptor::ROASourceCollectionAdaptor()
{
}

void ROASourceCollectionAdaptor::addSource(const QString &sourceName, const QString &sourceValue)
{
    QList<ROASourceItem*> sourceItem;

    sourceItem << new ROASourceCheckableItem( sourceName , m_dataCollection.count(), 0);
    sourceItem << new ROASourceTextItem( sourceValue , m_dataCollection.count(), 1);

    m_dataCollection << sourceItem;
}

ROASourceItem* ROASourceCollectionAdaptor::getItemAtLocation(const int &row, const int &col)
{    
    return m_dataCollection[row].at(col);
}

int ROASourceCollectionAdaptor::getSourceCount() const
{
    return m_dataCollection.count();
}
