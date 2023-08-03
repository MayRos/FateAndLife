#ifndef DATABASE_H
#define DATABASE_H

#include "database_global.h"
#include<QSqlDatabase>

class DATABASE_EXPORT Database
{
    QSqlDatabase db;
    void InitDatabase();
public:
    Database();
};

#endif // !DATABASE_H