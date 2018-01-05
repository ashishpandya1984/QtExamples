#ifndef SOURCEADDITION_H
#define SOURCEADDITION_H

#include <QDialog>

namespace Ui {
class SourceAddition;
}

class SourceAddition : public QDialog
{
    Q_OBJECT
    
public:
    explicit SourceAddition(QWidget *parent = 0);

    ~SourceAddition();
    
    QString sourceName() const;

    void setSourceName(const QString &sourceName);

    QString sourceValue() const;

    void setSourceValue(const QString &sourceValue);

    QString sourceType() const;

    void setSourceType(const QString &sourceType);

private:
    Ui::SourceAddition *ui;

    QString m_sourceName;

    QString m_sourceValue;

    QString m_sourceType;
};

#endif // SOURCEADDITION_H
