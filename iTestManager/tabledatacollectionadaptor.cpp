#include "tabledatacollectionadaptor.h"
#include "tablecellcheckableitem.h"
#include "tablecelltextitem.h"
#include "tablecelldropdownitem.h"

TableDataCollectionAdaptor::TableDataCollectionAdaptor()
{
}

TableDataCollectionAdaptor::~TableDataCollectionAdaptor()
{
}

TableCellDataItem* TableDataCollectionAdaptor::getItemAtLocation(const int &row, const int &col)
{    
    return m_dataCollection[row].at(col);
}

int TableDataCollectionAdaptor::getSourceCount() const
{
    return m_dataCollection.count();
}
