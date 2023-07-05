#include "mainscene.h"
#include "dialog2.h"
#include "mainwindowdyx.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowDyx x;
    x.show();
    return a.exec();
}
