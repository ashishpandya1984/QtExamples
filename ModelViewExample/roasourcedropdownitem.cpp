#include "roasourcedropdownitem.h"
#include <QFrame>
#include <QVBoxLayout>
#include <QComboBox>

ROASourceDropDownItem::ROASourceDropDownItem(const QString &value, const int &row, const int &col)
    : ROASourceItem( value, ROASourceItem::ITEM_WIDGET, row, col)
{
}

ROASourceDropDownItem::~ROASourceDropDownItem()
{
}

QWidget *ROASourceDropDownItem::getItemWidget()
{
    if( m_itemWidget )
        delete m_itemWidget, m_itemWidget = 0;

    QFrame *containerFrame = new QFrame();
    QVBoxLayout *layout = new QVBoxLayout( containerFrame );

    QComboBox *comboBoxItem = new QComboBox( containerFrame );
    comboBoxItem->addItems( QStringList() << "Automatic" << "Manual");
    comboBoxItem->setCurrentText( m_sourceValue );

    layout->addWidget( comboBoxItem );
    layout->setContentsMargins(3,3,3,3);

    containerFrame->setLayout( layout );
    return (m_itemWidget = containerFrame);
}
