#ifndef MAINSCHOOL_H
#define MAINSCHOOL_H

#include "Login.h"
#include "about.h"
#include "mainwindow.h"

class mainSchool
{
private:
    int a = 0,b = 0,c = 0;
    Login *login;
    About *about;
    mainwindow *window;

public:
    mainSchool();

    ~mainSchool();

private slots:
    void showabout();

};

#endif // MAINSCHOOL_H
