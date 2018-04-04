#include "tabledatamodel.h"

TableDataModel::TableDataModel(TableDataCollectionAdaptor *sourceCollection, QList<QString> columns, QObject *parent) :
    QAbstractTableModel(parent), m_columnInfo(columns), m_numberOfColumns(columns.count()),
    m_tableDataCollection(sourceCollection)
{
    m_view = dynamic_cast<QTableView*> (parent);
}

int TableDataModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);

    if( m_tableDataCollection )
        return m_tableDataCollection->getSourceCount();
    return 0;
}

int TableDataModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return m_numberOfColumns;
}

QVariant TableDataModel::data(const QModelIndex &index, int role) const
{
    if( !index.isValid() )
        return QVariant();

    switch ( role )
    {
    case Qt::DisplayRole:
        {
            TableCellDataItem* sourceItem = m_tableDataCollection->getItemAtLocation( index.row(), index.column() );

            if( sourceItem && sourceItem->getItemType() == TableCellDataItem::ITEM_TEXT )
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

QVariant TableDataModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if( orientation != Qt::Horizontal || role != Qt::DisplayRole )
        return QVariant();

    return m_columnInfo[section];
}

void TableDataModel::refresh()
{
    beginResetModel();
    endResetModel();    
}

Qt::ItemFlags TableDataModel::flags( const QModelIndex &index ) const
{
    if ( !index.isValid() )
        return 0;

    return ( QAbstractItemModel::flags( index ) );
}
