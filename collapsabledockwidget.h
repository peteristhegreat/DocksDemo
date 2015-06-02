#ifndef COLLAPSABLEDOCKWIDGET_H
#define COLLAPSABLEDOCKWIDGET_H

#include <QWidget>

class CollapsableDockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CollapsableDockWidget(QWidget *parent = 0);
    ~CollapsableDockWidget();

signals:

public slots:
};

#endif // COLLAPSABLEDOCKWIDGET_H
