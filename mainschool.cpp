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
    window = new schoolmasterwindow();
    window->show();
    login->close();
}
