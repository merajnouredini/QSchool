#ifndef MAINSCHOOL_H
#define MAINSCHOOL_H

#include "Login.h"
#include "about.h"
#include "schoolmasterwindow.h"

class mainSchool
{
private:
    Login *login;
    About *about;
    schoolmasterwindow *window;

public:
    mainSchool();
    void showabout();
    ~mainSchool();

};

#endif // MAINSCHOOL_H
