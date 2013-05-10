#include "mainwindow.h"

void mainwindow::aboutme()
{
    qDebug("Kuft");
    ab = new About();
    ab->show();
}


mainwindow::mainwindow(int a, int b, int c)
{
    this->resize(600, 400);
    this->setMinimumSize(QSize(600, 400));
    this->setMaximumSize(QSize(600, 400));

    Exit = new QAction(this);
    Exit->setObjectName(QStringLiteral("Exit"));
    About_ = new QAction(this);
    About_->setObjectName(QStringLiteral("About"));
    actionExit = new QAction(this);
    actionExit->setObjectName(QStringLiteral("actionExit"));
    actionAbout = new QAction(this);
    actionAbout->setObjectName(QStringLiteral("actionAbout"));
    actionLogout = new QAction(this);
    actionLogout->setObjectName(QStringLiteral("actionLogout"));
    centralwidget = new QWidget(this);
    centralwidget->setObjectName(QStringLiteral("centralwidget"));
    gridLayout_4 = new QGridLayout(centralwidget);
    gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
    groupBox_2 = new QGroupBox(centralwidget);
    groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
    groupBox_2->setEnabled(a);
    gridLayout_2 = new QGridLayout(groupBox_2);
    gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
    groupBox_3 = new QGroupBox(groupBox_2);
    groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
    groupBox_3->setEnabled(b);
    gridLayout = new QGridLayout(groupBox_3);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    te_name = new QLabel(groupBox_3);
    te_name->setObjectName(QStringLiteral("te_name"));
    gridLayout->addWidget(te_name, 0, 0, 1, 1);
    stname = new QLineEdit(groupBox_3);
    stname->setObjectName(QStringLiteral("stname"));
    gridLayout->addWidget(stname, 0, 1, 1, 2);
    te_family = new QLabel(groupBox_3);
    te_family->setObjectName(QStringLiteral("te_family"));
    gridLayout->addWidget(te_family, 1, 0, 1, 1);
    stfamily = new QLineEdit(groupBox_3);
    stfamily->setObjectName(QStringLiteral("stfamily"));
    gridLayout->addWidget(stfamily, 1, 1, 1, 2);
    horizontalSpacer_6 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout->addItem(horizontalSpacer_6, 2, 0, 1, 2);
    add = new QPushButton(groupBox_3);
    add->setObjectName(QStringLiteral("add"));
    gridLayout->addWidget(add, 2, 2, 1, 1);
    gridLayout_2->addWidget(groupBox_3, 3, 1, 1, 2);
    studenttable = new QTableWidget(groupBox_2);
    studenttable->setObjectName(QStringLiteral("studenttable"));
    gridLayout_2->addWidget(studenttable, 0, 0, 4, 1);
    stuname = new QLabel(groupBox_2);
    stuname->setObjectName(QStringLiteral("stuname"));
    gridLayout_2->addWidget(stuname, 0, 1, 1, 1);
    lineEdit = new QLineEdit(groupBox_2);
    lineEdit->setObjectName(QStringLiteral("lineEdit"));
    gridLayout_2->addWidget(lineEdit, 0, 2, 1, 1);
    type = new QLabel(groupBox_2);
    type->setObjectName(QStringLiteral("type"));
    gridLayout_2->addWidget(type, 1, 1, 1, 1);
    type_2 = new QComboBox(groupBox_2);
    type_2->setObjectName(QStringLiteral("type_2"));
    gridLayout_2->addWidget(type_2, 1, 2, 1, 1);
    submit = new QPushButton(groupBox_2);
    submit->setObjectName(QStringLiteral("submit"));
    gridLayout_2->addWidget(submit, 2, 2, 1, 1);
    horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout_2->addItem(horizontalSpacer_3, 2, 1, 1, 1);
    gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);
    groupBox = new QGroupBox(centralwidget);
    groupBox->setObjectName(QStringLiteral("groupBox"));
    groupBox->setEnabled(c);
    gridLayout_3 = new QGridLayout(groupBox);
    gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
    Teachers = new QTableView(groupBox);
    Teachers->setObjectName(QStringLiteral("Teachers"));
    gridLayout_3->addWidget(Teachers, 0, 0, 3, 1);
    tename = new QLabel(groupBox);
    tename->setObjectName(QStringLiteral("tename"));
    gridLayout_3->addWidget(tename, 0, 1, 1, 1);
    teacher_name = new QLineEdit(groupBox);
    teacher_name->setObjectName(QStringLiteral("teacher_name"));
    gridLayout_3->addWidget(teacher_name, 0, 2, 1, 1);
    horizontalSpacer = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout_3->addItem(horizontalSpacer, 0, 3, 1, 1);
    tefamily = new QLabel(groupBox);
    tefamily->setObjectName(QStringLiteral("tefamily"));
    gridLayout_3->addWidget(tefamily, 1, 1, 1, 1);
    treacher_family = new QLineEdit(groupBox);
    treacher_family->setObjectName(QStringLiteral("treacher_family"));
    gridLayout_3->addWidget(treacher_family, 1, 2, 1, 1);
    horizontalSpacer_2 = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout_3->addItem(horizontalSpacer_2, 1, 3, 1, 1);
    access = new QLabel(groupBox);
    access->setObjectName(QStringLiteral("access"));
    gridLayout_3->addWidget(access, 2, 1, 1, 1);
    accesscombo = new QComboBox(groupBox);
    accesscombo->setObjectName(QStringLiteral("accesscombo"));
    gridLayout_3->addWidget(accesscombo, 2, 2, 1, 1);
    addteacher = new QPushButton(groupBox);
    addteacher->setObjectName(QStringLiteral("addteacher"));
    gridLayout_3->addWidget(addteacher, 2, 3, 1, 1);
    gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);
    this->setCentralWidget(centralwidget);
    menubar = new QMenuBar(this);
    menubar->setObjectName(QStringLiteral("menubar"));
    menubar->setGeometry(QRect(0, 0, 600, 21));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QStringLiteral("menuFile"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QStringLiteral("menuHelp"));
    this->setMenuBar(menubar);
    statusbar = new QStatusBar(this);
    statusbar->setObjectName(QStringLiteral("statusbar"));
    this->setStatusBar(statusbar);
    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuFile->addAction(actionLogout);
    menuFile->addAction(actionExit);
    menuHelp->addAction(actionAbout);
    this->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
    this->setStatusTip(QApplication::translate("MainWindow", "Main Window", 0));
    Exit->setText(QApplication::translate("MainWindow", "exit", 0));
    About_->setText(QApplication::translate("MainWindow", "about", 0));
    actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
    actionExit->setStatusTip(QApplication::translate("MainWindow", "Exit Aplication", 0));
    actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
    actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
    actionAbout->setStatusTip(QApplication::translate("MainWindow", "About Aplication", 0));
    actionAbout->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
    actionLogout->setText(QApplication::translate("MainWindow", "Logout", 0));
    actionLogout->setStatusTip(QApplication::translate("MainWindow", "Logout", 0));
    actionLogout->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
    groupBox_2->setTitle(QApplication::translate("MainWindow", "Students", 0));
    groupBox_3->setTitle(QApplication::translate("MainWindow", "Add student", 0));
    te_name->setText(QApplication::translate("MainWindow", "Name", 0));
    te_family->setText(QApplication::translate("MainWindow", "Family", 0));
    add->setText(QApplication::translate("MainWindow", "Add", 0));
    stuname->setText(QApplication::translate("MainWindow", "student name", 0));
    type->setText(QApplication::translate("MainWindow", "type", 0));
    submit->setText(QApplication::translate("MainWindow", "submit", 0));
    groupBox->setTitle(QApplication::translate("MainWindow", "Teachers", 0));
    tename->setText(QApplication::translate("MainWindow", "Name", 0));
    tefamily->setText(QApplication::translate("MainWindow", "Family", 0));
    access->setText(QApplication::translate("MainWindow", "Access Type", 0));
    addteacher->setText(QApplication::translate("MainWindow", "Add", 0));
    menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    this->connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));
    this->connect(actionAbout, SIGNAL(triggered()), this, SLOT(aboutme()));
}

mainwindow::~mainwindow()
{

}

