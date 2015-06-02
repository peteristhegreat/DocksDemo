#ifndef COLLAPSABLEDOCKWIDGET_H
#define COLLAPSABLEDOCKWIDGET_H

#include <QDockWidget>
#include <QResizeEvent>
#include <QSize>

class CollapsableDockWidget : public QDockWidget
{
    Q_OBJECT
public:
    explicit CollapsableDockWidget(QWidget *parent = 0);
    ~CollapsableDockWidget();
    QSize minimumSizeHint();
signals:

public slots:

protected:
    void resizeEvent(QResizeEvent * re);
};

#endif // COLLAPSABLEDOCKWIDGET_H
