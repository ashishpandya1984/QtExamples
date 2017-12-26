#include <QApplication>
#include <QPaintEvent>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QVector>
#include <QPointF>
#include <QRegion>
#include <QPainterPath>
#include <QHBoxLayout>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QTimer>
#include "rqtooltipwidget.h"

RQToolTipWidget::RQToolTipWidget( )
    : QWidget( NULL , Qt::Tool | Qt::FramelessWindowHint ), m_tipText( "" )
{
    setAttribute(Qt::WA_TranslucentBackground);    

    QHBoxLayout *layout =  new QHBoxLayout( this );
    m_label = new QLabel( this );
    m_label->setAlignment( Qt::AlignBottom );

    layout->setAlignment( m_label, Qt::AlignCenter );
    layout->addWidget( m_label );

    setLayout( layout );
}

RQToolTipWidget::~RQToolTipWidget()
{

}

void RQToolTipWidget::displayToolTip(const QString& tipText, const QPoint& location)
{
    m_label->setText( m_tipText = tipText );
    m_tipLocation = location;

    //Animation will bring it like tooltip instead of widget
    QGraphicsOpacityEffect *fedIneff = new QGraphicsOpacityEffect(this);
    setGraphicsEffect(fedIneff);

    show();

    QPropertyAnimation *fedInAnimation = new QPropertyAnimation(fedIneff,"opacity");
    fedInAnimation->setDuration(1000);
    fedInAnimation->setStartValue(0);
    fedInAnimation->setEndValue(1);
    fedInAnimation->setEasingCurve(QEasingCurve::InBack);
    fedInAnimation->start(QPropertyAnimation::DeleteWhenStopped);

    //In case mouse leave is not occured, tooltip will be closed after 2 seconds
    QTimer::singleShot(4000, this, SLOT(closeToolTip()));
}

void RQToolTipWidget::closeToolTip()
{
    //Smooth closing of tooltip
    QGraphicsOpacityEffect *fedOutEffect = new QGraphicsOpacityEffect(this);
    setGraphicsEffect(fedOutEffect);

    QPropertyAnimation *fedOutAnimation = new QPropertyAnimation(fedOutEffect,"opacity");
    fedOutAnimation->setDuration(1000);
    fedOutAnimation->setStartValue(1);
    fedOutAnimation->setEndValue(0);
    fedOutAnimation->setEasingCurve(QEasingCurve::OutBack);
    fedOutAnimation->start(QPropertyAnimation::DeleteWhenStopped);

    connect(fedOutAnimation,SIGNAL(finished()),this,SLOT(close()));
}

void RQToolTipWidget::paintEvent(QPaintEvent* e)
{
    (void)e;

    QPainter painter(this);
    resize(painter.fontMetrics().width(m_tipText) + 20, 50);

    QVector<QPointF> vertices;

    vertices << QPointF(0, height() * 0.3)
             << QPoint(width() * 0.4 , height() * 0.3)
             << QPoint(width() * 0.5 , 0)
             << QPoint(width() * 0.6 , height() * 0.3)
             << QPoint(width() , height() * 0.3)
             << QPointF(width(), height())
             << QPointF(0, height());

    QPolygonF balloonPoly = QPolygonF(vertices);

    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setRenderHint(QPainter::HighQualityAntialiasing, true);
    painter.setBrush(QBrush(QColor("lightblue")));

    painter.drawPolygon(balloonPoly);
    move(m_tipLocation);
}
