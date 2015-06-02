#include "collapsabledockwidget.h"
#include <QAction>
#include <QTimer>
#include <QDebug>

CollapsableDockWidget::CollapsableDockWidget(QWidget *parent) : QDockWidget(parent)
{

}

CollapsableDockWidget::~CollapsableDockWidget()
{

}

QSize CollapsableDockWidget::minimumSizeHint()
{
    return QSize();
}

void CollapsableDockWidget::resizeEvent(QResizeEvent *re)
{
    qDebug() << this->objectName() << this->minimumSize() << this->maximumSize() << this->size();
    QList <QWidget*> children = this->findChildren<QWidget*>();
    foreach(QWidget* w, children)
        w->setMinimumSize(1,1);

    int minWidth = 80 + 1;
    int minHeight = 23 + 1;
    int defaultDimension = 100;

    if(re->size().width() < minWidth)
    {
        this->toggleViewAction()->trigger();
    }
    if(re->size().height() < minHeight)
    {
        this->toggleViewAction()->trigger();
    }
}

