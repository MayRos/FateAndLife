#include "FateAndLife.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FateAndLife w;
    w.show();
    return a.exec();
}
