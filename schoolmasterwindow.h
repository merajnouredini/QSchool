#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
#include <QTableView>
#include <QTableWidget>
#include <QWidget>
#include "about.h"
#include "schooldb.h"
//#include "Login.h"


class schoolmasterwindow : public QMainWindow
{
     Q_OBJECT
public:
    //Login *log;
    schoolmasterwindow();
    About *ab;

    QAction *Exit;
    QAction *About_;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionLogout;
    QWidget *centralwidget;

    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *te_name;
    QLineEdit *stname;
    QLabel *te_family;
    QLineEdit *stfamily;
    QPushButton *add;
    QTableView *studenttable;
    QLabel *stuname;
    QLineEdit *lineEdit;
    QLabel *type;
    QComboBox *type_2;
    QPushButton *submit;
    QGroupBox *groupBox;
    QGridLayout *grid_teacher;
    QTableView *Teachers;
    QLabel *tename;
    QLineEdit *teacher_name;
    QLabel *tefamily;
    QLineEdit *treacher_family;

    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_3;

    QLabel *access;
    QLineEdit *accesspass;
    QPushButton *addteacher;

    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    Schooldb *db;
    ~schoolmasterwindow();

public slots:
    void on_actionAbout_triggered();
    void on_add_clicked();
    void log_out();
    void refreshtable();
    void on_submit_clicked();
};

#endif
