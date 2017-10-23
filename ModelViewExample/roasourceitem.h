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

signals:
    void itemSelected( const int& row, const int& col );

protected:
    QString m_sourceValue;

    QWidget *m_itemWidget;

    ROASourceItemType m_itemType;

    int m_row;

    int m_col;
};

/*----------------------------------------------------------------------------------------------------------*/

class ROASourceTextItem : public ROASourceItem
{
public:
    ROASourceTextItem( const QString& value, const int& row, const int& col);

    ~ROASourceTextItem();
};

/*----------------------------------------------------------------------------------------------------------*/

class ROASourceCheckableItem : public ROASourceItem
{
    Q_OBJECT

public:
    ROASourceCheckableItem( const QString& value, const int& row, const int& col);

    ~ROASourceCheckableItem();

    QWidget* getItemWidget();

private slots:
    void radioClicked();
};



#endif // ROASOURCEITEM_H
