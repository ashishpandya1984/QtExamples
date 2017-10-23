#include "rqradiobuttonitemdelegate.h"
#include <QRadioButton>
#include <QApplication>
#include <QMouseEvent>

RQRadioButtonItemDelegate::RQRadioButtonItemDelegate()
{
}

QWidget *RQRadioButtonItemDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    return QStyledItemDelegate::createEditor(parent, option, index);
}

void RQRadioButtonItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QStyledItemDelegate::setEditorData(editor, index);
}

void RQRadioButtonItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
 {
    (void)index;

     QStyleOptionButton button;
     QRect r = option.rect;//getting the rect of the cell
     int x,y,w,h;
     x = r.left() + 10;//the X coordinate
     y = r.top();//the Y coordinate
     w = r.width();//button width
     h = 30;//button height

     button.rect = QRect(x,y,w,h);
     button.text = "RUNWAY 1";
     button.state = QStyle::State_Active;

     QApplication::style()->drawControl( QStyle::CE_RadioButton, &button, painter);
 }

void RQRadioButtonItemDelegate::destroyEditor(QWidget *editor, const QModelIndex &index) const
{
    QStyledItemDelegate::destroyEditor(editor, index);
}
