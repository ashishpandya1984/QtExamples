#ifndef ROASOURCEITEM_H
#define ROASOURCEITEM_H

#include <QWidget>
#include <QRadioButton>
#include <QModelIndex>

class TableCellDataItem : public QObject
{
    Q_OBJECT

public:
    enum CellDataItemType
    {
        ITEM_TEXT,
        ITEM_WIDGET
    };

public:
    TableCellDataItem(const QString& sourceValue, const CellDataItemType &type, const int& row, const int& col);

    virtual ~TableCellDataItem();

    virtual CellDataItemType getItemType() const;

    virtual QString getValue() const;

    virtual QWidget* getItemWidget();

    virtual int row() const;

    virtual int col() const;

    virtual bool isValidIndex(const QModelIndex& index);

    virtual void setVisible();

    virtual void setHide();

signals:
    void itemSelected( const int& row, const int& col );

protected slots:
    virtual void selectionChanged(const QModelIndex index);

protected:
    QString m_sourceValue;

    QWidget *m_itemWidget;

    CellDataItemType m_itemType;

    int m_row;

    int m_col;
};

#endif // ROASOURCEITEM_H
