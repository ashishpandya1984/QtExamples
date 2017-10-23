#ifndef RQRADIOBUTTONITEMDELEGATE_H
#define RQRADIOBUTTONITEMDELEGATE_H

#include <QStyledItemDelegate>

class RQRadioButtonItemDelegate : public QStyledItemDelegate
{
    Q_OBJECT

public:
    RQRadioButtonItemDelegate();

protected:
    virtual QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;

    virtual void setEditorData(QWidget *editor, const QModelIndex &index) const;

    virtual void destroyEditor(QWidget *editor, const QModelIndex &index) const;

    virtual void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
};

#endif // RQRADIOBUTTONITEMDELEGATE_H
