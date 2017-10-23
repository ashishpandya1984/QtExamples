#include "rqdatasourceselectionview.h"
#include <QHeaderView>

#include "rqdatasourcetablemodel.h"
#include "roadatamodel.h"
#include "rqradiobuttonitemdelegate.h"

RQDataSourceSelectionView::RQDataSourceSelectionView(QWidget *parent) :
    QTableView(parent)
{
    m_roaDataModel = new ROADataModel();
    RQDataSourceTableModel *tableModel = new RQDataSourceTableModel( m_roaDataModel, this );

    setModel(tableModel);
    setSelectionBehavior(QAbstractItemView::SelectRows);
    setSelectionMode(QAbstractItemView::SingleSelection);
    horizontalHeader()->setStretchLastSection(true);
    setShowGrid(false);    
}

void RQDataSourceSelectionView::addDataSource(const QString &sourceName, const QString &sourceValue)
{
    ((RQDataSourceTableModel*)model())->addSource(sourceName, sourceValue);    
}
