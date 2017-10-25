#include "roasourcecollectionadaptor.h"
#include "roasourcecheckableitem.h"
#include "roasourcetextitem.h"
#include "roasourcedropdownitem.h"

ROASourceCollectionAdaptor::ROASourceCollectionAdaptor()
{
}

void ROASourceCollectionAdaptor::addSource(const QString &sourceName, const QString &sourceValue, const QString& sourceType )
{
    QList<ROASourceItem*> sourceItem;

    sourceItem << new ROASourceCheckableItem( sourceName , m_dataCollection.count(), 0);
    sourceItem << new ROASourceTextItem( sourceValue , m_dataCollection.count(), 1);
    sourceItem << new ROASourceDropDownItem( sourceType, m_dataCollection.count(), 2, ( QStringList() << "Automatic" << "Manual" ) );

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
