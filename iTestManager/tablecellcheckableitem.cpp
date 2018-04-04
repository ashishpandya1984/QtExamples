#include "tablecellcheckableitem.h"

TableCellCheckableItem::TableCellCheckableItem(const QString &value, const int &row, const int &col)
    : TableCellDataItem (value, TableCellDataItem::ITEM_WIDGET, row, col)
{
}

TableCellCheckableItem::~TableCellCheckableItem()
{
}

QWidget* TableCellCheckableItem::getItemWidget()
{
    if( m_itemWidget )
        delete m_itemWidget, m_itemWidget = 0;

    m_itemWidget = new QRadioButton( m_sourceValue );
    m_itemWidget->setFocusPolicy(Qt::NoFocus);

    QObject::connect( static_cast<QRadioButton*>(m_itemWidget), SIGNAL(clicked()), this, SLOT(radioClicked()) );
    return m_itemWidget;
}

void TableCellCheckableItem::radioClicked()
{
    emit itemSelected( m_row, m_col );
}

void TableCellCheckableItem::selectionChanged(const QModelIndex index)
{
    if( TableCellDataItem::isValidIndex(index) )
    {
        QRadioButton* button = dynamic_cast<QRadioButton*>( m_itemWidget );

        if( button )
            button->toggle();
    }
}
