#include "terminalmanagementtabledatamodel.h"

TerminalManagementTableDataModel::TerminalManagementTableDataModel(TableDataCollectionAdaptor *sourceCollection, QList<QString> columns, QObject *parent)
    : TableDataModel( sourceCollection, columns, parent )
{
}

void TerminalManagementTableDataModel::refresh()
{
    TableDataModel::refresh();

    for ( int i = 0; i < m_tableDataCollection->getSourceCount(); i++ )
    {
        TableCellDataItem *cellTestButtonItem = m_tableDataCollection->getItemAtLocation(i, TerminalManagementTableDataModel::TEST_BUTTON_INDEX);
        TableCellDataItem *cellEditButtonItem = m_tableDataCollection->getItemAtLocation(i, TerminalManagementTableDataModel::EDIT_BUTTON_INDEX);
        TableCellDataItem *cellRemoveButtonItem = m_tableDataCollection->getItemAtLocation(i, TerminalManagementTableDataModel::REMOVE_BUTTON_INDEX);

        QObject::connect( cellTestButtonItem, SIGNAL(itemSelected(int,int)), this, SLOT(dataSelectedForTest(int,int)));
        QObject::connect( cellEditButtonItem, SIGNAL(itemSelected(int,int)), this, SLOT(dataSelectedForEdit(int,int)));
        QObject::connect( cellRemoveButtonItem, SIGNAL(itemSelected(int,int)), this, SLOT(dataSelectedForRemove(int,int)));

        QObject::connect( cellTestButtonItem, SIGNAL(itemSelected(int,int)), m_view, SLOT(selectRow(int)));
        QObject::connect( cellEditButtonItem, SIGNAL(itemSelected(int,int)), m_view, SLOT(selectRow(int)));
        QObject::connect( cellRemoveButtonItem, SIGNAL(itemSelected(int,int)), m_view, SLOT(selectRow(int)));

        m_view->setIndexWidget( index(i, TerminalManagementTableDataModel::TEST_BUTTON_INDEX), cellTestButtonItem->getItemWidget() );
        m_view->setIndexWidget( index(i, TerminalManagementTableDataModel::EDIT_BUTTON_INDEX), cellEditButtonItem->getItemWidget() );
        m_view->setIndexWidget( index(i, TerminalManagementTableDataModel::REMOVE_BUTTON_INDEX), cellRemoveButtonItem->getItemWidget() );
    }
}


void TerminalManagementTableDataModel::dataSelectedForEdit(int row, int col)
{
    (void)row;
    (void)col;
}

void TerminalManagementTableDataModel::dataSelectedForRemove(int row, int col)
{
    (void)row;
    (void)col;
}

void TerminalManagementTableDataModel::dataSelectedForTest(int row, int col)
{
    (void)row;
    (void)col;
}
