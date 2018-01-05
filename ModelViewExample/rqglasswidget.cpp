#include "rqglasswidget.h"

RQGlassWidget::RQGlassWidget(QWidget* parent)
    : QWidget( parent ), m_parent (parent)
{
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TransparentForMouseEvents);

    //setAttribute(Qt::WA_NoSystemBackground);
    //setAttribute(Qt::WA_TranslucentBackground);
    //setAttribute(Qt::WA_PaintOnScreen);
}

void RQGlassWidget::showGlass()
{
    resize( m_parent->size() );
    this->setGeometry(m_parent->geometry());
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    this->setWindowOpacity(0.5);

    show();
}

void RQGlassWidget::hideGlass()
{
    close();
}

void RQGlassWidget::paintEvent(QPaintEvent* e)
{
    QWidget::paintEvent(e);
}

