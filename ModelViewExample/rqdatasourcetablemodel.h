#ifndef RQDATASOURCETABLEMODEL_H
#define RQDATASOURCETABLEMODEL_H

#include <QAbstractTableModel>
#include <QTableView>
#include "roadatamodel.h"

class RQDataSourceTableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit RQDataSourceTableModel(ROADataModel* dataModel, QObject *parent = 0);

protected:
    virtual int rowCount(const QModelIndex &parent) const;

    virtual int columnCount(const QModelIndex &parent) const;

    virtual QVariant data(const QModelIndex &index, int role) const;

    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const;

    virtual Qt::ItemFlags flags(const QModelIndex &index) const;

    virtual void refresh();
    
public slots:
    void addSource(const QString& sourceName, const QString& sourceValue);

protected:
    ROADataModel* m_dataModel;

    int m_numberOfRows;

    int m_numberOfColumns;

    QList<QString> m_columnInfo;

    QTableView *m_view;
};

#endif // RQDATASOURCETABLEMODEL_H
