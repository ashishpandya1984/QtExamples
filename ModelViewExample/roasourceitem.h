#ifndef ROASOURCEITEM_H
#define ROASOURCEITEM_H

#include <QWidget>
#include <QRadioButton>
#include <QModelIndex>

class ROASourceItem : public QObject
{
    Q_OBJECT

public:
    enum ROASourceItemType
    {
        ITEM_TEXT,
        ITEM_WIDGET
    };

public:
    ROASourceItem(const QString& sourceValue, const ROASourceItemType &type, const int& row, const int& col);

    virtual ~ROASourceItem();

    virtual ROASourceItemType getItemType() const;

    virtual QString getValue() const;

    virtual QWidget* getItemWidget();

    virtual int row() const;

    virtual int col() const;

    virtual bool isValidIndex(const QModelIndex& index);

signals:
    void itemSelected( const int& row, const int& col );

protected slots:
    virtual void selectionChanged(const QModelIndex index);

protected:
    QString m_sourceValue;

    QWidget *m_itemWidget;

    ROASourceItemType m_itemType;

    int m_row;

    int m_col;
};

#endif // ROASOURCEITEM_H
