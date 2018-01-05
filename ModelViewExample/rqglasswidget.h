#ifndef RQGLASSWIDGET_H
#define RQGLASSWIDGET_H

#include <QWidget>

class RQGlassWidget : public QWidget
{
public:
    RQGlassWidget(QWidget *parent);

    void showGlass();

    void hideGlass();

    virtual void paintEvent(QPaintEvent *e);

protected:
    QWidget *m_parent;
};

#endif // RQGLASSWIDGET_H
