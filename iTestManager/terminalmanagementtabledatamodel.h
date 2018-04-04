#ifndef TERMINALMANAGEMENTTABLEDATAMODEL_H
#define TERMINALMANAGEMENTTABLEDATAMODEL_H

#include "tabledatamodel.h"
#include "terminalinfo.h"

class TerminalManagementTableDataModel : public TableDataModel
{
    Q_OBJECT

public:
    TerminalManagementTableDataModel(TableDataCollectionAdaptor* sourceCollection, QList<QString> columns, QObject *parent = 0);

    void refresh();

signals:
    void dataSelectedForEdit( TerminalInfo terminal );

    void dataSelectedForRemove( TerminalInfo terminal );

private slots:
    void dataSelectedForEdit(int row, int col);

    void dataSelectedForRemove( int row, int col);

    void dataSelectedForTest( int row, int col);

private:
    const static int TEST_BUTTON_INDEX = 5;

    const static int EDIT_BUTTON_INDEX = 6;

    const static int REMOVE_BUTTON_INDEX = 7;
};

#endif // TERMINALMANAGEMENTTABLEDATAMODEL_H
