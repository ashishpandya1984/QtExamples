#include "rqdatasourcetablemodel.h"
#include <QRadioButton>

RQDataSourceTableModel::RQDataSourceTableModel(ROASourceCollectionAdaptor *sourceCollection, QObject *parent) :
    QAbstractTableModel(parent)
{
    m_view = dynamic_cast<QTableView*> (parent);

    m_roaSourceCollection = sourceCollection;
    m_numberOfColumns = 3;

    m_columnInfo << QString("Data source");
    m_columnInfo << QString("Current value");
    m_columnInfo << QString("Source Type");
}

int RQDataSourceTableModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);

    if( m_roaSourceCollection )
        return m_roaSourceCollection->getSourceCount();
    return 0;
}

int RQDataSourceTableModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_numberOfColumns;
}

QVariant RQDataSourceTableModel::data(const QModelIndex &index, int role) const
{
    if( !index.isValid() )
        return QVariant();

    switch ( role )
    {
    case Qt::DisplayRole:
        {
            ROASourceItem* sourceItem = m_roaSourceCollection->getItemAtLocation( index.row(), index.column() );

            if( sourceItem && sourceItem->getItemType() == ROASourceItem::ITEM_TEXT )
                return sourceItem->getValue();

            return QVariant();
        }
        break;
    default:
        {
            return QVariant();
        }
        break;
    }
}

QVariant RQDataSourceTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if( orientation != Qt::Horizontal || role != Qt::DisplayRole )
        return QVariant();

    return m_columnInfo[section];
}

void RQDataSourceTableModel::refresh()
{
    beginResetModel();
    endResetModel();

    for (int i = 0; i < m_roaSourceCollection->getSourceCount(); i++)
    {
        ROASourceItem *cellRadioItem = m_roaSourceCollection->getItemAtLocation(i, 0);
        ROASourceItem *cellDropDownItem = m_roaSourceCollection->getItemAtLocation(i, 2);

        QObject::connect( cellRadioItem, SIGNAL( itemSelected( int, int )), m_view, SLOT( selectRow( int ) ) );
        QObject::connect( m_view, SIGNAL( pressed( QModelIndex ) ), cellRadioItem, SLOT( selectionChanged( const QModelIndex ) ) );

        m_view->setIndexWidget( index(i, 0), cellRadioItem->getItemWidget() );
        m_view->setIndexWidget( index(i, 2), cellDropDownItem->getItemWidget() );
    }
}

void RQDataSourceTableModel::addSource( const QString &sourceName, const QString &sourceValue )
{
    if( m_roaSourceCollection )
    {
        m_roaSourceCollection->addSource( sourceName, sourceValue );
        refresh();
    }
}

Qt::ItemFlags RQDataSourceTableModel::flags( const QModelIndex &index ) const
{
    if ( !index.isValid() )
        return 0;

    return ( QAbstractItemModel::flags( index ) );
}
