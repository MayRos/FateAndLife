#include "FateAndLife.h"
#include <QtWidgets/QApplication>
#include<QSqlDatabase>
#include<QSqlError>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FateAndLife w;
    w.show();
    return a.exec();
}
