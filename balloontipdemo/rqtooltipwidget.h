#ifndef RQTOOLTIPWIDGET_H
#define RQTOOLTIPWIDGET_H

#include <QWidget>
#include <QPoint>
#include <QLabel>

class RQToolTipWidget : public QWidget
{
    Q_OBJECT

public:
    RQToolTipWidget( );

    virtual ~RQToolTipWidget();

    void displayToolTip(const QString& tipText, const QPoint& location);

public slots:
    virtual void closeToolTip();

protected:
    void paintEvent(QPaintEvent* e);

protected:
    QString m_tipText;

    QPoint m_tipLocation;

    QLabel *m_label;
};

#endif // RQTOOLTIPWIDGET_H
