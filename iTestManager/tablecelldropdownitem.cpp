#include "tablecelldropdownitem.h"
#include <QFrame>
#include <QVBoxLayout>
#include <QComboBox>

TableCellDropDownItem::TableCellDropDownItem(const QString &value, const int &row, const int &col, const QStringList options)
    : TableCellDataItem( value, TableCellDataItem::ITEM_WIDGET, row, col), m_dropDownOptions( options )
{
}

TableCellDropDownItem::~TableCellDropDownItem()
{
}

QWidget *TableCellDropDownItem::getItemWidget()
{
    if( m_itemWidget )
        delete m_itemWidget, m_itemWidget = 0;

    QFrame *containerFrame = new QFrame();
    QVBoxLayout *layout = new QVBoxLayout( containerFrame );

    QComboBox *comboBoxItem = new QComboBox( containerFrame );
    comboBoxItem->addItems( m_dropDownOptions );
    comboBoxItem->setCurrentText( m_sourceValue );
    comboBoxItem->setFocusPolicy(Qt::NoFocus);

    layout->addWidget( comboBoxItem );
    layout->setContentsMargins(3,3,3,3);

    containerFrame->setLayout( layout );
    return (m_itemWidget = containerFrame);
}
