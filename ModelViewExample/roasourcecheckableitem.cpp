#include "roasourcecheckableitem.h"

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
    m_itemWidget->setFocusPolicy(Qt::NoFocus);

    QObject::connect( static_cast<QRadioButton*>(m_itemWidget), SIGNAL(clicked()), this, SLOT(radioClicked()) );
    return m_itemWidget;
}

void ROASourceCheckableItem::radioClicked()
{
    emit itemSelected( m_row, m_col );
}

void ROASourceCheckableItem::selectionChanged(const QModelIndex index)
{
    if( ROASourceItem::isValidIndex(index) )
    {
        QRadioButton* button = dynamic_cast<QRadioButton*>( m_itemWidget );

        if( button )
            button->toggle();
    }
}
