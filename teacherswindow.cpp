#include "teacherswindow.h"
#include "Login.h"

Teacherswindow::Teacherswindow()
{

    this->resize(600, 400);
    this->setMaximumSize(QSize(600, 400));
    this->setStatusTip("Teacher Window");
    this->setWindowTitle("Teacher Interface");

    centralwidget = new QWidget(this);
    gridLayout = new QGridLayout(centralwidget);
    this->setCentralWidget(centralwidget);

    actionLogout = new QAction(this);
    actionLogout->setText("Logout");
    actionLogout->setStatusTip("Logout Program");
    actionLogout->setWhatsThis("Press to logout");
    actionLogout->setShortcut(QApplication::translate("teacher", "Ctrl+L", 0));

    actionExit = new QAction(this);
    actionExit->setText("Exit");
    actionExit->setStatusTip("Exit Program");
    actionExit->setWhatsThis("Press to exit");
    actionExit->setShortcut(QApplication::translate("teacher", "Ctrl+Q", 0));

    actionAbout = new QAction(this);
    actionAbout->setText("About");
    actionAbout->setStatusTip("About Program");
    actionAbout->setWhatsThis("Press to know something about program");
    actionAbout->setShortcut(QApplication::translate("teacher", "Ctrl+A", 0));

    menubar = new QMenuBar(this);
    menubar->setGeometry(QRect(0, 0, 600, 21));

    menuFile = new QMenu(menubar);
    menuFile->addAction(actionLogout);
    menuFile->addAction(actionExit);
    menuFile->setTitle("File");
    menubar->addAction(menuFile->menuAction());

    menuHelp = new QMenu(menubar);
    menuHelp->addAction(actionAbout);
    menuHelp->setTitle("Help");
    menubar->addAction(menuHelp->menuAction());

    statusbar = new QStatusBar(this);
    this->setStatusBar(statusbar);
    this->setMenuBar(menubar);

    Teachergroupbox = new QGroupBox(centralwidget);
    gridLayout_2 = new QGridLayout(Teachergroupbox);

    horizontalSpacer = new QSpacerItem(222, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 3);

    stlabel = new QLabel(Teachergroupbox);
    gridLayout_2->addWidget(stlabel, 0, 3, 1, 2);

    horizontalSpacer_2 = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout_2->addItem(horizontalSpacer_2, 0, 5, 1, 2);

    studenttable = new QTableView(Teachergroupbox);
    gridLayout_2->addWidget(studenttable, 1, 0, 1, 7);

    comboBox = new QComboBox(Teachergroupbox);
    gridLayout_2->addWidget(comboBox, 2, 0, 1, 2);

    course = new QLabel(Teachergroupbox);
    course->setText("نام درس:");
    gridLayout_2->addWidget(course, 2, 3, 1, 1);

    stname = new QLineEdit(Teachergroupbox);
    stname->setObjectName(QStringLiteral("stname"));

    gridLayout_2->addWidget(stname, 2, 4, 1, 2);

    stnamelabel = new QLabel(Teachergroupbox);
    stnamelabel->setText("نام دانش آموز:");
    gridLayout_2->addWidget(stnamelabel, 2, 6, 1, 1);

    submit = new QPushButton(Teachergroupbox);
    submit->setText("اعمال تغییرات");
    gridLayout_2->addWidget(submit, 3, 0, 1, 2);

    course_2 = new QLineEdit(Teachergroupbox);
    gridLayout_2->addWidget(course_2,  3, 4, 1, 2);

    scorelabel = new QLabel(Teachergroupbox);
    scorelabel->setText("نمره:");
    gridLayout_2->addWidget(scorelabel, 3, 6, 1, 1);

    gridLayout->addWidget(Teachergroupbox, 0, 0, 1, 1);

    Teachergroupbox->setTitle("Teacher's Panel");
    stlabel->setText("Table of Students");
    comboBox->clear();
    comboBox->insertItems(0, QStringList() << "ریاضی" << "فیزیک" << "شیمی" );

    model = new QSqlTableModel;

    this->connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));
    this->connect(actionAbout, SIGNAL(triggered()), this, SLOT(aboutme()));
    this->connect(actionLogout, SIGNAL(triggered()), this, SLOT(log_out()));
    this->connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));

    model->setTable("student");
    model->setHeaderData(0,Qt::Horizontal, QObject::tr("نام و نام خانوادگی"));
    model->setHeaderData(1,Qt::Horizontal, QObject::tr("ریاضی"));
    model->setHeaderData(2,Qt::Horizontal, QObject::tr("فیزیک"));
    model->setHeaderData(3,Qt::Horizontal, QObject::tr("شیمی"));
    model->setHeaderData(4,Qt::Horizontal, QObject::tr("معدل"));
    model->setHeaderData(5,Qt::Horizontal, QObject::tr("مورد انضباطی"));
    model->select();
    studenttable->setModel(model);
}

void Teacherswindow::log_out()
{
    Login *log = new Login();
    log->show();
    this->close();
}

void Teacherswindow::aboutme()
{
    About *ab = new About();
    ab->show();
}

Teacherswindow::~Teacherswindow()
{
    delete actionLogout;
    delete actionExit;
    delete actionAbout;
    delete centralwidget;
    delete gridLayout;
    delete Teachergroupbox;
    delete gridLayout_2;
    delete horizontalSpacer;
    delete stlabel;
    delete horizontalSpacer_2;
    delete studenttable;
    delete comboBox;
    delete course;
    delete stname;
    delete stnamelabel;
    delete submit;
    delete course_2;
    delete scorelabel;
    delete menubar;
    delete menuFile;
    delete menuHelp;
    delete statusbar;
    delete model;
}
