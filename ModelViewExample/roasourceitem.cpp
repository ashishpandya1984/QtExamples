#include "roasourceitem.h"
#include <QRadioButton>

ROASourceItem::ROASourceItem(const QString &sourceValue, const ROASourceItem::ROASourceItemType& type, const int &row, const int &col)
    : m_sourceValue (sourceValue), m_itemType (type), m_itemWidget(0), m_row( row ), m_col(col)
{
}

ROASourceItem::~ROASourceItem()
{
    if(m_itemWidget)
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

/*----------------------------------------------------------------------------------------------------------*/

ROASourceTextItem::ROASourceTextItem(const QString &value, const int &row, const int &col)
    : ROASourceItem (value, ROASourceItem::ITEM_TEXT, row, col)
{
}

ROASourceTextItem::~ROASourceTextItem()
{
}

/*----------------------------------------------------------------------------------------------------------*/


ROASourceCheckableItem::ROASourceCheckableItem(const QString &value, const int &row, const int &col)
    : ROASourceItem (value, ROASourceItem::ITEM_WIDGET, row, col)
{    
}

ROASourceCheckableItem::~ROASourceCheckableItem()
{
}

QWidget* ROASourceCheckableItem::getItemWidget()
{
    if( m_itemWidget )
        delete m_itemWidget, m_itemWidget = 0;

    m_itemWidget = new QRadioButton( m_sourceValue );
    QObject::connect( (QRadioButton*)m_itemWidget, SIGNAL(clicked()), this, SLOT(radioClicked()) );

    return m_itemWidget;
}

void ROASourceCheckableItem::radioClicked()
{
    emit itemSelected( m_row, m_col );
}
