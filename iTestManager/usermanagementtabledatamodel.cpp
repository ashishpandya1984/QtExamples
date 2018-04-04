#include "usermanagementtabledatamodel.h"

UserManagementTableDataModel::UserManagementTableDataModel(TableDataCollectionAdaptor *sourceCollection, QList<QString> columns, QObject *parent)
    : TableDataModel( sourceCollection, columns, parent )
{
}

UserManagementTableDataModel::~UserManagementTableDataModel()
{
}

void UserManagementTableDataModel::refresh()
{
    TableDataModel::refresh();

    for (int i = 0; i < m_tableDataCollection->getSourceCount(); i++)
    {
        TableCellDataItem *cellEditButtonItem = m_tableDataCollection->getItemAtLocation(i, UserManagementTableDataModel::EDIT_BUTTON_INDEX);
        TableCellDataItem *cellRemoveButtonItem = m_tableDataCollection->getItemAtLocation(i, UserManagementTableDataModel::REMOVE_BUTTON_INDEX);

        QObject::connect( cellEditButtonItem, SIGNAL(itemSelected(int,int)), this, SLOT(dataSelectedForEdit(int,int)));
        QObject::connect( cellRemoveButtonItem, SIGNAL(itemSelected(int,int)), this, SLOT(dataSelectedForRemove(int,int)));

        QObject::connect( cellEditButtonItem, SIGNAL(itemSelected(int,int)), m_view, SLOT(selectRow(int)));
        QObject::connect( cellRemoveButtonItem, SIGNAL(itemSelected(int,int)), m_view, SLOT(selectRow(int)));

        m_view->setIndexWidget( index(i, UserManagementTableDataModel::EDIT_BUTTON_INDEX), cellEditButtonItem->getItemWidget() );
        m_view->setIndexWidget( index(i, UserManagementTableDataModel::REMOVE_BUTTON_INDEX), cellRemoveButtonItem->getItemWidget() );
    }
}


void UserManagementTableDataModel::dataSelectedForEdit(int row, int col)
{
    (void)col;
    emit dataSelectedForEdit( UserInfo( m_tableDataCollection->getItemAtLocation( row, 0)->getValue(), m_tableDataCollection->getItemAtLocation( row, 1)->getValue() ) );
}

void UserManagementTableDataModel::dataSelectedForRemove(int row, int col)
{
    (void)col;
    emit dataSelectedForRemove( UserInfo( m_tableDataCollection->getItemAtLocation( row, 0)->getValue(), m_tableDataCollection->getItemAtLocation( row, 1)->getValue() ) );
}
