#include "mainschool.h"

mainSchool::mainSchool()
{
//    login = new Login();
//    login->show();
    int a = 1, b = 0, c = 1;
    //whit this argument we khow who logined
    window = new mainwindow(&a, &b, &c);
    window->show();
}

mainSchool::~mainSchool()
{
    delete login;
    delete about;
    delete window;
}

