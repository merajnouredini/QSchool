#ifndef SCHOOLDB_H
#define SCHOOLDB_H

#include <QString>

class Schooldb
{
public:
    Schooldb();
    void add_user();
    bool authenticate(const QString&, const QString&);
};

#endif // SCHOOLDB_H
