#include "schooldb.h"
#include <QtSql>
#include <string>

Schooldb::Schooldb()
{
    QSqlQuery *query = new QSqlQuery;
    query->exec("CREATE TABLE IF NOT EXISTS teacher(name TEXT, password TEXT, Unique(name))");
    query->exec("CREATE TABLE IF NOT EXISTS schoolmaster(username TEXT, password TEXT, Unique(username))");
    query->exec("CREATE TABLE IF NOT EXISTS student(name TEXT, course1 TEXT, course2 TEXT, course3 TEXT, average TEXT, mored TEXT)");
    qDebug() << query->lastError();
    delete query;

}

void Schooldb::add_user()
{
    QSqlQuery *query = new QSqlQuery;
    query->exec("INSERT INTO teacher(name, password) VALUES('user1','12345')");
    query->exec("INSERT INTO schoolmaster(username, password) VALUES('admin','12345')");
    qDebug() << query->lastError();
    delete query;
}

char Schooldb::authenticate(const QString &usrname, const QString &pw)
{
    qDebug() << usrname;
    qDebug() << pw;
    std::string usr;
    usr = usrname.toStdString();
    if(usr == "admin")
    {
        QSqlQuery *query = new QSqlQuery;
        query->prepare("SELECT * from schoolmaster WHERE username = :user AND password = :pass");
        query->bindValue(":user", usrname);
        query->bindValue(":pass", pw);
        query->exec();
        query->next();
        qDebug() << query->value(0);
        if (query->isValid())
        {
            delete query;
            return 'a';
        }
        else
        {
            delete query;
            return 'n';
        }
    }
    else
    {
        QSqlQuery *query = new QSqlQuery;
        query->prepare("SELECT * from teacher WHERE name = :user AND password = :pass");
        query->bindValue(":user", usrname);
        query->bindValue(":pass", pw);
        query->exec();
        query->next();
        qDebug() << query->value(0);
        if (query->isValid())
        {
            delete query;
            return 't';
        }
        else
        {
            delete query;
            return 'n';
        }
    }
}

void Schooldb::add_students(QString& name)
{
    if (name != "")
    {
        QSqlQuery *query = new QSqlQuery;
        query->prepare("INSERT INTO student VALUES(:name,'','','','','')");
        qDebug() << query->lastError();
        query->bindValue(":name", name);
        query->exec();
        qDebug() << query->lastError();
        qDebug() << "Student added!";
        delete query;
   }

}

void Schooldb::add_teachers(QString& fname, QString& pass)
{
    if (fname != "")
    {
        QSqlQuery *query = new QSqlQuery;
        query->prepare("INSERT INTO teacher VALUES(:fname,:pass)");
        qDebug() << query->lastError();
        query->bindValue(":fname", fname);
        query->bindValue(":pass", pass);
        query->exec();
        qDebug() << query->lastError();
        qDebug() << "Teacher added!";
        delete query;
   }
}

void Schooldb::add_mored( QString& gname,  QString& mored)
{
    QSqlQuery *query = new QSqlQuery;
    query->prepare("UPDATE student SET mored = :mored WHERE name = :gname ");
    query->bindValue("mored", mored);
    qDebug() << "1"<<query->lastError();
    query->bindValue(":gname", gname);
    qDebug() << "2"<<query->lastError();
    query->exec();
    qDebug() << "3"<<query->lastError();
    delete query;
}

Schooldb::~Schooldb()
{
}
