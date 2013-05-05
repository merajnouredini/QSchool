#include "schooldb.h"
#include <QtSql>

Schooldb::Schooldb()
{
    QSqlQuery *query = new QSqlQuery;
    query->exec("CREATE TABLE IF NOT EXISTS teacher(username TEXT, password TEXT, Unique(username))");
    query->exec("CREATE TABLE IF NOT EXISTS schoolmaster(username TEXT, password TEXT)");
    query->exec("CREATE TABLE IF NOT EXISTS student(firstname TEXT, lastname TEXT, course1 TEXT, course2 TEXT, course3 TEXT, average TEXT)");
    qDebug() << query->lastError();
    delete query;
}

void Schooldb::add_user()
{
    QSqlQuery *query = new QSqlQuery;
    query->exec("INSERT INTO teacher(username, password) VALUES('user1','12345')");
    qDebug() << query->lastError();
    delete query;
}

bool Schooldb::authenticate(const QString &usrname, const QString &pw)
{
    qDebug() << usrname;
    qDebug() << pw;
    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT * from teacher WHERE username = :user AND password = :pass");
    query->bindValue(":user", usrname);
    query->bindValue(":pass", pw);
    query->exec();
    query->next();
    qDebug() << query->value(0);
    if (query->isValid())
    {
        delete query;
        return true;
    }
    else
    {
        delete query;
        return false;
    }
}
