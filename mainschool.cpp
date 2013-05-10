#include "mainschool.h"

mainSchool::mainSchool()
{
    login = new Login();
    login->show();

}

mainSchool::~mainSchool()
{
    delete login;
    delete about;
    delete window;
}

void mainSchool::showabout()
{
    window = new mainwindow(1, 1, 0);
    window->show();
    login->close();
}
