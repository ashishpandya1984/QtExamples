#ifndef RQDATASOURCESELECTIONVIEW_H
#define RQDATASOURCESELECTIONVIEW_H

#include <QTableView>
class ROADataModel;

class RQDataSourceSelectionView : public QTableView
{    
public:
    RQDataSourceSelectionView(QWidget *parent = 0);

    void addDataSource(const QString& sourceName, const QString& sourceValue);

protected:
    ROADataModel* m_roaDataModel;
    
};

#endif // RQDATASOURCESELECTIONVIEW_H
