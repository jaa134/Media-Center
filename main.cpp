#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <unistd.h>
#include <QApplication>
#include <QProgressBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.HideElementsAtStart();
    w.CenterWidget();
    //QMainWindow::showFullScreen();
    w.show();
    w.IncrementProgressbar();
    w.AnimateStartScreen();
    w.TransitionToMainPage();

    return a.exec();
}
