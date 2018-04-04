#include <QFrame>
#include <QVBoxLayout>
#include "tablecellactionbuttonitem.h"

TableCellActionButtonItem::TableCellActionButtonItem(const QString &value, const int &row, const int &col)
    : TableCellDataItem (value, TableCellDataItem::ITEM_WIDGET, row, col)
{
}

TableCellActionButtonItem::~TableCellActionButtonItem()
{
}

void TableCellActionButtonItem::setActionIcon(QPushButton *button)
{
    QString imgPath;

    if( m_sourceValue == "Edit" ){
        imgPath = "./images/alt-editar-icono-5470-128.png";
    }
    else if( m_sourceValue == "Test" ){
        imgPath = "./images/Test-512.png";
    }
    else{
        imgPath = "./images/erase-512.png";
    }

    QPixmap pixmap(imgPath);
    QIcon ButtonIcon(pixmap);
    button->setIcon(ButtonIcon);
    button->setIconSize(QSize(20,20));
}

QWidget *TableCellActionButtonItem::getItemWidget()
{
    if( m_itemWidget )
        delete m_itemWidget, m_itemWidget = 0;

    QFrame *containerFrame = new QFrame();
    QVBoxLayout *layout = new QVBoxLayout( containerFrame );

    QPushButton *button = new QPushButton();
    button->setMaximumSize(30, 35);

    setActionIcon(button);
    QObject::connect( button, SIGNAL(clicked()), this, SLOT(actionButtonClicked()) );

    layout->addWidget( button );
    layout->setContentsMargins(3,3,3,3);

    containerFrame->setLayout( layout );
    return (m_itemWidget = containerFrame);
}

void TableCellActionButtonItem::actionButtonClicked()
{
    emit itemSelected( m_row, m_col );
}
