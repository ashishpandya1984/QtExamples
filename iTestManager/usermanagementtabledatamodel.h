#ifndef USERMANAGEMENTTABLEDATAMODEL_H
#define USERMANAGEMENTTABLEDATAMODEL_H

#include "tabledatamodel.h"
#include "userinfo.h"

class UserManagementTableDataModel : public TableDataModel
{
    Q_OBJECT

public:
    UserManagementTableDataModel(TableDataCollectionAdaptor* sourceCollection, QList<QString> columns, QObject *parent = 0);

    ~UserManagementTableDataModel();

    void refresh();

signals:
    void dataSelectedForEdit(UserInfo user );

    void dataSelectedForRemove( UserInfo user );

private slots:
    void dataSelectedForEdit(int row, int col);

    void dataSelectedForRemove( int row, int col);

private:
    const static int EDIT_BUTTON_INDEX = 2;

    const static int REMOVE_BUTTON_INDEX = 3;
};

#endif // USERMANAGEMENTTABLEDATAMODEL_H
