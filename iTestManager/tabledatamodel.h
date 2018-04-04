#ifndef RQDATASOURCETABLEMODEL_H
#define RQDATASOURCETABLEMODEL_H

#include <QAbstractTableModel>
#include <QTableView>
#include "tabledatacollectionadaptor.h"

class TableDataModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit TableDataModel(TableDataCollectionAdaptor* sourceCollection, QList<QString> columns, QObject *parent = 0);

    virtual void refresh();

protected:
    virtual int rowCount(const QModelIndex &parent) const;

    virtual int columnCount(const QModelIndex &parent) const;

    virtual QVariant data(const QModelIndex &index, int role) const;

    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const;

    virtual Qt::ItemFlags flags(const QModelIndex &index) const;


protected:
    TableDataCollectionAdaptor* m_tableDataCollection;

    int m_numberOfRows;

    int m_numberOfColumns;

    QList<QString> m_columnInfo;

    QTableView *m_view;
};

#endif // RQDATASOURCETABLEMODEL_H
