#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList <QDockWidget*> dockWidgets = this->findChildren<QDockWidget*>();
    int count = 0;
    QMenu * menu = ui->menuView;

    foreach(QDockWidget* dw, dockWidgets)
    {
        count++;
        QString dockName = "Dock Widget " + QString::number(count);
        QLabel * label = dw->findChild<QLabel*>();
        if(label)
            label->setText(dockName);

        dw->toggleViewAction()->setText(dockName);
        menu->addAction(dw->toggleViewAction());

        qDebug() << dw->objectName();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
