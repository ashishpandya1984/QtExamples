#include "sourceaddition.h"
#include "ui_sourceaddition.h"

SourceAddition::SourceAddition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SourceAddition)
{
    ui->setupUi(this);
}

SourceAddition::~SourceAddition()
{
    delete ui;
}

QString SourceAddition::sourceType() const
{
    return ui->cb_sourceType->currentText();
}

QString SourceAddition::sourceValue() const
{
    return ui->edit_sourceValue->text();
}

QString SourceAddition::sourceName() const
{
    return ui->edit_sourceName->text();
}
