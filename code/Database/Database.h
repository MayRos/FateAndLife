#ifndef DATABASE_H
#define DATABASE_H

#include "database_global.h"
#include<QSqlDatabase>

class DATABASE_EXPORT Database
{
    QSqlDatabase db;
    void ConnectDatabase();

    Database();
    ~Database();
public:
    static Database& Instance();
};

#endif // !DATABASE_H