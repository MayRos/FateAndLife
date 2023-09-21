#include "Database.h"
#include<QSqlError>

void Database::ConnectDatabase()
{
    db.setHostName("127.0.0.1"); //连接本地主机
    db.setPort(3306);
    db.setDatabaseName("fate_and_life");
    db.setUserName("root");
    db.setPassword("admin123");
    bool ok = db.open();
    if (!ok)  {
        //qDebug() << "error open database because" << db.lastError().text();
    }
}

Database::Database()
    :db(QSqlDatabase::addDatabase("QMYSQL"))
{
    ConnectDatabase();

}

Database::~Database()
{
}

Database& Database::Instance()
{
    static Database instance;
    return instance;
}
