#include "about.h"
#include "widget.h"
#include <QApplication>
#include <QtSql>

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("schooldb");
    db.open();
    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    return a.exec();
}
