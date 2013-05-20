#ifndef TEACHERSWINDOW_H
#define TEACHERSWINDOW_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QGridLayout>
#include <QGroupBox>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QSpacerItem>
#include <QStatusBar>
#include <QTableWidget>
#include <QWidget>
//#include "Login.h"
#include "about.h"

class Teacherswindow: public QMainWindow
{
    Q_OBJECT

public :
    Teacherswindow();
    QAction *actionLogout;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *Teachergroupbox;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *stlabel;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *studenttable;
    QComboBox *comboBox;
    QLabel *course;
    QLineEdit *stname;
    QLabel *stnamelabel;
    QPushButton *submit;
    QLineEdit *course_2;
    QLabel *scorelabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    ~Teacherswindow();
public slots:
    void log_out();
    void aboutme();
};

#endif
