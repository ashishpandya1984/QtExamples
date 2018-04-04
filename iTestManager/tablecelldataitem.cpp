#include "tablecelldataitem.h"
#include <QRadioButton>

TableCellDataItem::TableCellDataItem(const QString &sourceValue, const TableCellDataItem::CellDataItemType& type, const int &row, const int &col)
    : m_sourceValue (sourceValue), m_itemType (type), m_itemWidget(0), m_row( row ), m_col(col)
{
}

TableCellDataItem::~TableCellDataItem()
{
    if( m_itemWidget )
        delete m_itemWidget, m_itemWidget;
}

TableCellDataItem::CellDataItemType TableCellDataItem::getItemType() const
{
    return m_itemType;
}

QString TableCellDataItem::getValue() const
{
    return m_sourceValue;
}

QWidget* TableCellDataItem::getItemWidget()
{
    return m_itemWidget;
}

int TableCellDataItem::row() const
{
    return m_row;
}

int TableCellDataItem::col() const
{
    return m_col;
}

bool TableCellDataItem::isValidIndex(const QModelIndex &index)
{
    return ( index.row() == m_row && index.isValid() );
}

void TableCellDataItem::setVisible()
{
    if( m_itemWidget )
        m_itemWidget->show();
}

void TableCellDataItem::setHide()
{
    if( m_itemWidget )
        m_itemWidget->hide();
}

void TableCellDataItem::selectionChanged(const QModelIndex index)
{
    (void)index;
}
