#include "mainwindow.h"
#include <QDebug>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Q_INIT_RESOURCE(resources);

    MainWindow window;
    window.show();

    return a.exec();
}
