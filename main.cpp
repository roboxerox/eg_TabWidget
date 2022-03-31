#include "eg_TabWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eg_TabWidget w;
    w.show();

    return a.exec();
}
