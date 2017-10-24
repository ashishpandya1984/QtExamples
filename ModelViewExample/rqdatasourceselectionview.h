#ifndef RQDATASOURCESELECTIONVIEW_H
#define RQDATASOURCESELECTIONVIEW_H

#include <QTableView>
class ROASourceCollectionAdaptor;

class RQDataSourceSelectionView : public QTableView
{    
public:
    RQDataSourceSelectionView(QWidget *parent = 0);

    void addDataSource(const QString& sourceName, const QString& sourceValue);

protected:
    ROASourceCollectionAdaptor* m_roaSourceCollection;
    
};

#endif // RQDATASOURCESELECTIONVIEW_H
