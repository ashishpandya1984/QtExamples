#include "rqglasswidget.h"

RQGlassWidget::RQGlassWidget(QWidget* parent)
    : QWidget( parent ), m_parent (parent), m_defaultWindowOpacity(0.4)
{
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TransparentForMouseEvents);    
}

void RQGlassWidget::showGlass()
{
    resize( m_parent->size() );
    setGeometry( m_parent->geometry() );
    setSizePolicy( QSizePolicy::Fixed, QSizePolicy::Fixed );
    setWindowOpacity( m_defaultWindowOpacity );

    show();

    emit backgroundReady();
}

void RQGlassWidget::hideGlass()
{
    close();
}

void RQGlassWidget::paintEvent(QPaintEvent* e)
{
    QPalette customPalette = palette();
    customPalette.setColor( QPalette::Background, Qt::black );
    setPalette( customPalette );

    QWidget::paintEvent( e );
}

