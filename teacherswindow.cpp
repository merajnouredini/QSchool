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

    menuHelp = new QMenu(menubar);
    menuHelp->addAction(actionAbout);
    menuHelp->setTitle("Help");


    menuFile = new QMenu(menubar);
    menuFile->addAction(actionLogout);
    menuFile->addAction(actionExit);
    menuFile->setTitle("File");

    menubar = new QMenuBar(this);
    menubar->setGeometry(QRect(0, 0, 600, 21));
    menubar->addAction(menuFile->menuAction());
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

    studenttable = new QTableWidget(Teachergroupbox);
    gridLayout_2->addWidget(studenttable, 1, 0, 1, 7);

    horizontalSpacer_3 = new QSpacerItem(77, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

    comboBox = new QComboBox(Teachergroupbox);
    gridLayout_2->addWidget(comboBox, 2, 1, 1, 1);

    course = new QLabel(Teachergroupbox);
    course->setText("نام درس:");
    gridLayout_2->addWidget(course, 2, 2, 1, 2);

    stname = new QLineEdit(Teachergroupbox);
    stname->setObjectName(QStringLiteral("stname"));

    gridLayout_2->addWidget(stname, 2, 4, 1, 2);

    stnamelabel = new QLabel(Teachergroupbox);
    stnamelabel->setText("نام دانش آموز:");
    gridLayout_2->addWidget(stnamelabel, 2, 6, 1, 1);

    submit = new QPushButton(Teachergroupbox);
    submit->setText("اعمال تغییرات");
    gridLayout_2->addWidget(submit, 3, 0, 1, 1);

    course_2 = new QLineEdit(Teachergroupbox);
    gridLayout_2->addWidget(course_2, 3, 1, 1, 1);

    scorelabel = new QLabel(Teachergroupbox);
    scorelabel->setText("نمره:");
    gridLayout_2->addWidget(scorelabel, 3, 3, 1, 1);

    stfamily = new QLineEdit(Teachergroupbox);
    gridLayout_2->addWidget(stfamily, 3, 4, 1, 2);

    stfamilylabel = new QLabel(Teachergroupbox);
    stfamilylabel->setText("نام خانوادگی دانش آموز:");
    gridLayout_2->addWidget(stfamilylabel, 3, 6, 1, 1);

    gridLayout->addWidget(Teachergroupbox, 0, 0, 1, 1);

    Teachergroupbox->setTitle("Teacher's Panel");
    stlabel->setText("Table of Students");
    comboBox->clear();
    comboBox->insertItems(0, QStringList() << "ریاضی" << "فیزیک" << "شیمی" << "معارف" << "فارسی" << "معادلات" << "کوفت" );

    this->connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));
    this->connect(actionAbout, SIGNAL(triggered()), this, SLOT(aboutme()));
    this->connect(actionLogout, SIGNAL(triggered()), this, SLOT(log_out()));
    this->connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));

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
    delete horizontalSpacer_3;
    delete comboBox;
    delete course;
    delete stname;
    delete stnamelabel;
    delete submit;
    delete course_2;
    delete scorelabel;
    delete stfamily;
    delete stfamilylabel;
    delete menubar;
    delete menuFile;
    delete menuHelp;
    delete statusbar;
}
