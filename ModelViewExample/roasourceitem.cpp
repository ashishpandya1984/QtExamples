#include "roasourceitem.h"
#include <QRadioButton>

ROASourceItem::ROASourceItem(const QString &sourceValue, const ROASourceItem::ROASourceItemType& type, const int &row, const int &col)
    : m_sourceValue (sourceValue), m_itemType (type), m_itemWidget(0), m_row( row ), m_col(col)
{
}

ROASourceItem::~ROASourceItem()
{
    if( m_itemWidget )
        delete m_itemWidget, m_itemWidget;
}

ROASourceItem::ROASourceItemType ROASourceItem::getItemType() const
{
    return m_itemType;
}

QString ROASourceItem::getValue() const
{
    return m_sourceValue;
}

QWidget* ROASourceItem::getItemWidget()
{
    return m_itemWidget;
}

int ROASourceItem::row() const
{
    return m_row;
}

int ROASourceItem::col() const
{
    return m_col;
}

bool ROASourceItem::isValidIndex(const QModelIndex &index)
{
    return ( index.row() == m_row && index.isValid() );
}

void ROASourceItem::selectionChanged(const QModelIndex index)
{
    (void)index;
}
