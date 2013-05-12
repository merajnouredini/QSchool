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
#include <QTableView>
#include <QTableWidget>
#include <QWidget>
#include "about.h"
//#include "Login.h"

class mainwindow : public QMainWindow
{
     Q_OBJECT
public:
    mainwindow(int, int, int);
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
    QSpacerItem *horizontalSpacer_6;
    QPushButton *add;
    QTableView *studenttable;
    QLabel *stuname;
    QLineEdit *lineEdit;
    QLabel *type;
    QComboBox *type_2;
    QPushButton *submit;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QTableView *Teachers;
    QLabel *tename;
    QLineEdit *teacher_name;
    QSpacerItem *horizontalSpacer;
    QLabel *tefamily;
    QLineEdit *treacher_family;
    QSpacerItem *horizontalSpacer_2;
    QLabel *access;
    QComboBox *accesscombo;
    QPushButton *addteacher;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    ~mainwindow();

public slots:
    void on_actionAbout_triggered();
};

#endif
