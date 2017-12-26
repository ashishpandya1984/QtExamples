#ifndef RQTOOLTIP_H
#define RQTOOLTIP_H

#include <QObject>
#include "rqtooltipwidget.h"

class RQToolTip : public QObject
{
    Q_OBJECT

public:
    RQToolTip();

    ~RQToolTip();

protected:
    virtual bool eventFilter(QObject *watched, QEvent *event);

protected:
    RQToolTipWidget *m_toolTipWidget;
};

#endif // RQTOOLTIP_H
