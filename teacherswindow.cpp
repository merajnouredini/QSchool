#include "teacherswindow.h"

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

Teacherswindow::Teacherswindow()
{
    this->resize(600, 400);
    this->setMaximumSize(QSize(600, 400));
    actionLogout = new QAction(this);
    actionLogout->setObjectName(QStringLiteral("actionLogout"));
    actionExit = new QAction(this);
    actionExit->setObjectName(QStringLiteral("actionExit"));
    actionAbout = new QAction(this);
    actionAbout->setObjectName(QStringLiteral("actionAbout"));
    centralwidget = new QWidget(this);
    centralwidget->setObjectName(QStringLiteral("centralwidget"));
    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    Teachergroupbox = new QGroupBox(centralwidget);
    Teachergroupbox->setObjectName(QStringLiteral("Teachergroupbox"));
    gridLayout_2 = new QGridLayout(Teachergroupbox);
    gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
    horizontalSpacer = new QSpacerItem(222, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 3);

    stlabel = new QLabel(Teachergroupbox);
    stlabel->setObjectName(QStringLiteral("stlabel"));

    gridLayout_2->addWidget(stlabel, 0, 3, 1, 2);

    horizontalSpacer_2 = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer_2, 0, 5, 1, 2);

    studenttable = new QTableWidget(Teachergroupbox);
    studenttable->setObjectName(QStringLiteral("studenttable"));

    gridLayout_2->addWidget(studenttable, 1, 0, 1, 7);

    horizontalSpacer_3 = new QSpacerItem(77, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

    comboBox = new QComboBox(Teachergroupbox);
    comboBox->setObjectName(QStringLiteral("comboBox"));

    gridLayout_2->addWidget(comboBox, 2, 1, 1, 1);

    course = new QLabel(Teachergroupbox);
    course->setObjectName(QStringLiteral("course"));

    gridLayout_2->addWidget(course, 2, 2, 1, 2);

    stname = new QLineEdit(Teachergroupbox);
    stname->setObjectName(QStringLiteral("stname"));

    gridLayout_2->addWidget(stname, 2, 4, 1, 2);

    stnamelabel = new QLabel(Teachergroupbox);
    stnamelabel->setObjectName(QStringLiteral("stnamelabel"));

    gridLayout_2->addWidget(stnamelabel, 2, 6, 1, 1);

    submit = new QPushButton(Teachergroupbox);
    submit->setObjectName(QStringLiteral("submit"));

    gridLayout_2->addWidget(submit, 3, 0, 1, 1);

    course_2 = new QLineEdit(Teachergroupbox);
    course_2->setObjectName(QStringLiteral("course_2"));

    gridLayout_2->addWidget(course_2, 3, 1, 1, 1);

    scorelabel = new QLabel(Teachergroupbox);
    scorelabel->setObjectName(QStringLiteral("scorelabel"));

    gridLayout_2->addWidget(scorelabel, 3, 3, 1, 1);

    stfamily = new QLineEdit(Teachergroupbox);
    stfamily->setObjectName(QStringLiteral("stfamily"));

    gridLayout_2->addWidget(stfamily, 3, 4, 1, 2);

    stfamilylabel = new QLabel(Teachergroupbox);
    stfamilylabel->setObjectName(QStringLiteral("stfamilylabel"));

    gridLayout_2->addWidget(stfamilylabel, 3, 6, 1, 1);


    gridLayout->addWidget(Teachergroupbox, 0, 0, 1, 1);

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

    QObject::connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));

    QMetaObject::connectSlotsByName(this);
    this->setWindowTitle(QApplication::translate("teacher", "Teacher Interface", 0));

    this->setStatusTip(QApplication::translate("teacher", "Teacher Window", 0));

    actionLogout->setText(QApplication::translate("teacher", "Logout", 0));

    actionLogout->setStatusTip(QApplication::translate("teacher", "Logout Program", 0));

    actionLogout->setWhatsThis(QApplication::translate("teacher", "Press to logout", 0));

    actionLogout->setShortcut(QApplication::translate("teacher", "Ctrl+L", 0));
    actionExit->setText(QApplication::translate("teacher", "Exit", 0));

    actionExit->setStatusTip(QApplication::translate("teacher", "Exit Program", 0));

    actionExit->setWhatsThis(QApplication::translate("teacher", "Press to exit", 0));

    actionExit->setShortcut(QApplication::translate("teacher", "Ctrl+Q", 0));
    actionAbout->setText(QApplication::translate("teacher", "About", 0));

    actionAbout->setStatusTip(QApplication::translate("teacher", "About Program", 0));

    actionAbout->setWhatsThis(QApplication::translate("teacher", "Press to know something about program", 0));

    actionAbout->setShortcut(QApplication::translate("teacher", "Ctrl+A", 0));
    Teachergroupbox->setTitle(QApplication::translate("teacher", "Teacher's Panel", 0));
    stlabel->setText(QApplication::translate("teacher", "Table of Students", 0));
    comboBox->clear();
    comboBox->insertItems(0, QStringList()
     << QApplication::translate("teacher", "\330\261\333\214\330\247\330\266\333\214", 0)
     << QApplication::translate("teacher", "\331\201\333\214\330\262\333\214\332\251", 0)
     << QApplication::translate("teacher", "\331\205\330\271\330\247\330\261\331\201", 0)
     << QApplication::translate("teacher", "\330\264\333\214\331\205\333\214", 0)
     << QApplication::translate("teacher", "\330\262\330\250\330\247\331\206 \330\247\331\206\332\257\331\204\333\214\330\263\333\214", 0)
     << QApplication::translate("teacher", "\332\257\330\263\330\263\330\252\331\207", 0)
     << QApplication::translate("teacher", "\330\257\333\214\331\201\330\261\330\247\331\206\330\263\333\214\331\204", 0)
    );

    this->connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));

    this->connect(actionAbout, SIGNAL(triggered()), this, SLOT(aboutme()));

    this->connect(actionLogout, SIGNAL(triggered()), this, SLOT(log_out()));

    course->setText(QApplication::translate("teacher", "\331\206\330\247\331\205 \330\257\330\261\330\263 :", 0));
    stnamelabel->setText(QApplication::translate("teacher", "\331\206\330\247\331\205 \330\257\330\247\331\206\330\264 \330\242\331\205\331\210\330\262 :", 0));
    submit->setText(QApplication::translate("teacher", "Submit", 0));
    scorelabel->setText(QApplication::translate("teacher", "\331\206\331\205\330\261\331\207 :", 0));
    stfamilylabel->setText(QApplication::translate("teacher", "\331\206\330\247\331\205 \330\256\330\247\331\206\331\210\330\247\330\257\332\257\333\214 \330\257\330\247\331\206\330\264 \330\242\331\205\331\210\330\262 :", 0));
    menuFile->setTitle(QApplication::translate("teacher", "File", 0));
    menuHelp->setTitle(QApplication::translate("teacher", "Help", 0));

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
