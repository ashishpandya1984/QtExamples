#include "rqdatasourceselectionview.h"
#include <QHeaderView>

#include "rqdatasourcetablemodel.h"
#include "roasourcecollectionadaptor.h"

RQDataSourceSelectionView::RQDataSourceSelectionView(QWidget *parent) :
    QTableView(parent)
{
    m_roaSourceCollection = new ROASourceCollectionAdaptor();
    RQDataSourceTableModel *tableModel = new RQDataSourceTableModel( m_roaSourceCollection, this );

    setModel(tableModel);
    setSelectionBehavior(QAbstractItemView::SelectRows);
    setSelectionMode(QAbstractItemView::SingleSelection);
    horizontalHeader()->setStretchLastSection(true);

    setShowGrid(false);
    setFocusPolicy(Qt::NoFocus);
    setAlternatingRowColors(true);
}

void RQDataSourceSelectionView::addDataSource(const QString &sourceName, const QString &sourceValue, const QString& sourceType)
{
    ((RQDataSourceTableModel*)model())->addSource(sourceName, sourceValue, sourceType);
}
