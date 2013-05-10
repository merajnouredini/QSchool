#ifndef MAINSCHOOL_H
#define MAINSCHOOL_H

#include "Login.h"
#include "about.h"
#include "mainwindow.h"

class mainSchool
{
private:
    Login *login;
    About *about;
    mainwindow *window;

public:
    mainSchool();
    void showabout();
    ~mainSchool();

};

#endif // MAINSCHOOL_H
