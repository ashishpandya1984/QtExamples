#include "rqdatasourcetablemodel.h"
#include <QRadioButton>

RQDataSourceTableModel::RQDataSourceTableModel(ROADataModel* dataModel, QObject *parent) :
    QAbstractTableModel(parent)
{
    m_view = dynamic_cast<QTableView*> (parent);

    m_dataModel = dataModel;
    m_numberOfColumns = 2;

    m_columnInfo << QString("Data source");
    m_columnInfo << QString("Current value");
}

int RQDataSourceTableModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);

    if( m_dataModel )
        return m_dataModel->getSourceCount();
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
            ROASourceItem* sourceItem = m_dataModel->getItemAtLocation( index.row(), index.column() );

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

    for (int i = 0; i < m_dataModel->getSourceCount(); i++)
    {
        ROASourceItem *cellItem = m_dataModel->getItemAtLocation(i, 0);

        m_view->setIndexWidget( index(i, 0), cellItem->getItemWidget() );
        QObject::connect(cellItem, SIGNAL(itemSelected(int,int)), m_view, SLOT(selectRow(int)));
    }
}

void RQDataSourceTableModel::addSource( const QString &sourceName, const QString &sourceValue )
{
    if( m_dataModel )
    {
        m_dataModel->addSource(sourceName, sourceValue);
        refresh();
    }
}

Qt::ItemFlags RQDataSourceTableModel::flags( const QModelIndex &index ) const
{
    if (!index.isValid())
        return 0;

    return ( QAbstractItemModel::flags( index ) );
}
