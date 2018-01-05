#ifndef RQGLASSWIDGET_H
#define RQGLASSWIDGET_H

#include <QWidget>

class RQGlassWidget : public QWidget
{
    Q_OBJECT

public:
    RQGlassWidget(QWidget *parent);

    virtual void paintEvent(QPaintEvent *e);

public slots:
    void showGlass();

    void hideGlass();

signals:
    void backgroundReady();

protected:
    QWidget *m_parent;

    const double m_defaultWindowOpacity;
};

#endif // RQGLASSWIDGET_H
