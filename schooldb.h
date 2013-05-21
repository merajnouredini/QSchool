#ifndef SCHOOLDB_H
#define SCHOOLDB_H

#include <QString>
#include <QApplication>

class Schooldb
{
public:
    Schooldb();
    void add_user();
    char authenticate(const QString&, const QString&);
    void add_students(QString&);
    void add_teachers(QString&, QString&);
    void add_mored(QString&, QString&);
    void add_grade(QString&, int, QString&);
    ~Schooldb();

};

#endif
