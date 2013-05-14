#include "schoolmasterwindow.h"
#include "Login.h"

void schoolmasterwindow::on_actionAbout_triggered()
{
    qDebug("Kuft");
    ab = new About();
    ab->show();
}

void schoolmasterwindow::log_out()
{
    Login *login = new Login();
    login->show();
    this->close();
}

schoolmasterwindow::schoolmasterwindow()
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
    groupBox_2->setEnabled(true);
    gridLayout_2 = new QGridLayout(groupBox_2);
    gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
    groupBox_3 = new QGroupBox(groupBox_2);
    groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
    groupBox_3->setEnabled(true);
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
    type_2->clear();
    type_2->insertItems(0, QStringList()
     << QApplication::translate("MainWindow", "\330\252\330\247\330\256\333\214\330\261", 0)
     << QApplication::translate("MainWindow", "\330\272\333\214\330\250\330\252", 0)
     << QApplication::translate("MainWindow", "\330\247\330\256\330\261\330\247\330\254 \330\247\330\262 \332\251\331\204\330\247\330\263", 0)
     << QApplication::translate("MainWindow", "\330\247\330\256\330\261\330\247\330\254 \330\247\330\262 \331\205\330\257\330\261\330\263\331\207", 0)
     << QApplication::translate("MainWindow", "\330\257\330\261 \332\257\333\214\330\261\333\214", 0)
     << QApplication::translate("MainWindow", "\330\242\331\210\330\261\330\257\331\206 \331\210\330\263\330\247\333\214\331\204 \331\206\330\247\331\205\330\261\330\250\331\210\330\267", 0)
    );
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
    groupBox->setEnabled(true);
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
    this->setWindowTitle("Master View");
    this->setStatusTip("Master Window");
    Exit->setText("exit");
    About_->setText("about");
    actionExit->setText("Exit");
    actionExit->setStatusTip("Exit Aplication");
    actionExit->setShortcut(QApplication::translate("teacher", "Ctrl+Q", 0));
    actionAbout->setText("About");
    actionAbout->setStatusTip("About Aplication");
    actionAbout->setShortcut(QApplication::translate("master", "Ctrl+A", 0));
    actionLogout->setText("Logout");
    actionLogout->setStatusTip("Logout");
    actionLogout->setShortcut(QApplication::translate("teacher", "Ctrl+L", 0));
    groupBox_2->setTitle("Students");
    groupBox_3->setTitle("Add student");
    te_name->setText("Name");
    te_family->setText("Family");
    add->setText("Add");
    stuname->setText("student name");
    type->setText("type");
    submit->setText("submit");
    groupBox->setTitle("Teachers");
    tename->setText("Name");
    tefamily->setText("Family");
    access->setText("Access Type");
    addteacher->setText("Add");
    menuFile->setTitle("File");
    menuHelp->setTitle("Help");
    db = new Schooldb;
    this->connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));
    this->connect(actionAbout, SIGNAL(triggered()), this, SLOT(on_actionAbout_triggered()));
    this->connect(add, SIGNAL(clicked()), this, SLOT(on_add_clicked()));
    this->connect(actionLogout, SIGNAL(triggered()), this, SLOT(log_out()));
}

void schoolmasterwindow::on_add_clicked()
{
    QString fname;
    QString lname;
    fname = stname->text();
    lname = stfamily->text();
    db->add_students(fname, lname);
}

schoolmasterwindow::~schoolmasterwindow()
{
    delete db;
    delete ab;
    delete Exit;
    delete About_;
    delete actionExit;
    delete actionAbout;
    delete actionLogout;
    delete centralwidget;
    delete gridLayout_4;
    delete groupBox_2;
    delete gridLayout_2;
    delete groupBox_3;
    delete gridLayout;
    delete te_name;
    delete stname;
    delete te_family;
    delete stfamily;
    delete horizontalSpacer_6;
    delete add;
    delete studenttable;
    delete stuname;
    delete lineEdit;
    delete type;
    delete type_2;
    delete submit;
    delete horizontalSpacer_3;
    delete groupBox;
    delete gridLayout_3;
    delete Teachers;
    delete tename;
    delete teacher_name;
    delete horizontalSpacer;
    delete tefamily;
    delete treacher_family;
    delete horizontalSpacer_2;
    delete access;
    delete accesscombo;
    delete addteacher;
    delete menubar;
    delete menuFile;
    delete menuHelp;
    delete statusbar;
}

