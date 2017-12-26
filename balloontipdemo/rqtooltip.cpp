#include <QEvent>
#include "rqtooltip.h"

RQToolTip::RQToolTip()
    : m_toolTipWidget(0)
{
    m_toolTipWidget = new RQToolTipWidget( );
}

RQToolTip::~RQToolTip()
{
    if(m_toolTipWidget)
        delete m_toolTipWidget, m_toolTipWidget = 0;
}

bool RQToolTip::eventFilter(QObject *watched, QEvent *event)
{
    QWidget *filteredWidget = qobject_cast<QWidget*>(watched);

    switch( event->type() )
    {
        case QEvent::ToolTip:
        {
            if( filteredWidget && m_toolTipWidget )
            {
                const QString toolTip = filteredWidget->toolTip();
                m_toolTipWidget->displayToolTip(toolTip, m_toolTipWidget->parentWidget()->mapFromGlobal(QCursor::pos()));

                event->accept();
                return true;
            }
        }
        break;
        default:
        {
            if( m_toolTipWidget )
                m_toolTipWidget->closeToolTip();

            return QObject::eventFilter(watched, event);
        }
    }

    return QObject::eventFilter(watched, event);
}

