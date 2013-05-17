#include "schoolmasterwindow.h"
#include "Login.h"
#include <QtSql>

schoolmasterwindow::schoolmasterwindow()
{
    //initialize the window
    this->resize(600, 400);
    this->setMinimumSize(QSize(600, 400));
    this->setMaximumSize(QSize(600, 400));
    this->setWindowTitle("Master View");
    this->setStatusTip("Master Window");

    //implimenting the menu bar
    menubar = new QMenuBar(this);
    menubar->setGeometry(QRect(0, 0, 600, 21));
    this->setMenuBar(menubar);

    //adding status bar
    statusbar = new QStatusBar(this);
    this->setStatusBar(statusbar);

    //adding menu bar
    menuFile = new QMenu(menubar);
    menuFile->setTitle("File");
    menubar->addAction(menuFile->menuAction());

    menuHelp = new QMenu(menubar);
    menuHelp->setTitle("Help");
    menubar->addAction(menuHelp->menuAction());

    //adding the action
    Exit = new QAction(this);
    Exit->setText("exit");

    About_ = new QAction(this);
    About_->setText("about");

    actionLogout = new QAction(this);
    actionLogout->setText("Logout");
    actionLogout->setStatusTip("Logout");
    actionLogout->setShortcut(QApplication::translate("teacher", "Ctrl+L", 0));
    menuFile->addAction(actionLogout);

    actionExit = new QAction(this);
    actionExit->setText("Exit");
    actionExit->setStatusTip("Exit Aplication");
    actionExit->setShortcut(QApplication::translate("teacher", "Ctrl+Q", 0));
    menuFile->addAction(actionExit);

    actionAbout = new QAction(this);
    actionAbout->setText("About");
    actionAbout->setStatusTip("About Aplication");
    actionAbout->setShortcut(QApplication::translate("master", "Ctrl+A", 0));
    menuHelp->addAction(actionAbout);

    //adding widgets and grids
    centralwidget = new QWidget(this);

    gridLayout_4 = new QGridLayout(centralwidget);

    groupBox_2 = new QGroupBox(centralwidget);
    groupBox_2->setTitle("Students");
    groupBox_2->setEnabled(true);

    gridLayout_2 = new QGridLayout(groupBox_2);

    groupBox_3 = new QGroupBox(groupBox_2);
    groupBox_3->setTitle("Add student");
    groupBox_3->setEnabled(true);

    gridLayout = new QGridLayout(groupBox_3);

    te_name = new QLabel(groupBox_3);
    te_name->setText("Name");
    gridLayout->addWidget(te_name, 0, 0, 1, 1);

    stname = new QLineEdit(groupBox_3);
    gridLayout->addWidget(stname, 0, 1, 1, 2);


    horizontalSpacer_6 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout->addItem(horizontalSpacer_6, 2, 0, 1, 2);

    add = new QPushButton(groupBox_3);
    add->setText("افزودن");
    gridLayout->addWidget(add, 2, 2, 1, 1);

    gridLayout_2->addWidget(groupBox_3, 3, 1, 1, 2);

    studenttable = new QTableView(groupBox_2);
    gridLayout_2->addWidget(studenttable, 0, 0, 4, 1);

    stuname = new QLabel(groupBox_2);
    stuname->setText("student name");
    gridLayout_2->addWidget(stuname, 0, 1, 1, 1);

    lineEdit = new QLineEdit(groupBox_2);
    gridLayout_2->addWidget(lineEdit, 0, 2, 1, 1);

    type = new QLabel(groupBox_2);
    type->setText("type");
    gridLayout_2->addWidget(type, 1, 1, 1, 1);

    type_2 = new QComboBox(groupBox_2);
    type_2->clear();
    type_2->insertItems(0, QStringList()<< "تاخیر" << "غیبت" << "اخراج از کلاس" << "در گیری");
    gridLayout_2->addWidget(type_2, 1, 2, 1, 1);

    submit = new QPushButton(groupBox_2);
    submit->setText("اعمال تغییزات");
    gridLayout_2->addWidget(submit, 2, 2, 1, 1);

    horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    gridLayout_2->addItem(horizontalSpacer_3, 2, 1, 1, 1);
    gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);

    groupBox = new QGroupBox(centralwidget);
    groupBox->setTitle("Teachers");
    groupBox->setEnabled(true);

    grid_teacher = new QGridLayout(groupBox);

    Teachers = new QTableView(groupBox);
    grid_teacher->addWidget(Teachers, 0, 0, 3, 1);

    tename = new QLabel(groupBox);
    tename->setText("Name");
    grid_teacher->addWidget(tename, 0, 1, 1, 1);

    teacher_name = new QLineEdit(groupBox);
    grid_teacher->addWidget(teacher_name, 0, 2, 1, 1);

    horizontalSpacer = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    grid_teacher->addItem(horizontalSpacer, 0, 3, 1, 1);


    horizontalSpacer_2 = new QSpacerItem(112, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    grid_teacher->addItem(horizontalSpacer_2, 1, 3, 1, 1);

    access = new QLabel(groupBox);
    access->setText("Password");
    grid_teacher->addWidget(access, 1, 1, 1, 1);

    accesspass = new QLineEdit(groupBox);
    accesspass->setEchoMode(QLineEdit::Password);
    grid_teacher->addWidget(accesspass, 1, 2, 1, 1);

    addteacher = new QPushButton(groupBox);
    addteacher->setText("افزودن");
    grid_teacher->addWidget(addteacher, 2, 3, 1, 1);

    gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);
    this->setCentralWidget(centralwidget);

    db = new Schooldb;

    model = new QSqlTableModel;

    //connecting actions and buttons
    this->connect(actionExit, SIGNAL(triggered()), this, SLOT(close()));
    this->connect(actionAbout, SIGNAL(triggered()), this, SLOT(on_actionAbout_triggered()));
    this->connect(add, SIGNAL(clicked()), this, SLOT(on_add_clicked()));
    this->connect(actionLogout, SIGNAL(triggered()), this, SLOT(log_out()));
    this->connect(submit,SIGNAL(clicked()),this,SLOT(on_submit_clicked()));
    this->connect(studenttable, SIGNAL(clicked(QModelIndex)), this, SLOT(stu_autofill()));


    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("student");
    model->select();
    studenttable->setModel(model);
    studenttable->hideColumn(1);
    studenttable->hideColumn(2);
    studenttable->hideColumn(3);
    studenttable->hideColumn(4);


}

void schoolmasterwindow::on_add_clicked()
{
    QString name;
    name = stname->text();
    db->add_students(name);
    model->setTable("student");
    model->select();
    studenttable->setModel(model);
    stname->setText("");
}

void schoolmasterwindow::on_submit_clicked()
{
    QString name;
    QString mored;
    name = lineEdit->text();
    mored = type_2->currentText();
    db->add_mored(name, mored);
    model->select();
    studenttable->setModel(model);
    lineEdit->setText("");
}

void schoolmasterwindow::refreshtable()
{
    model->setTable("student");
    model->select();
    studenttable->setModel(model);
}

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

void schoolmasterwindow::stu_autofill()
{
    QModelIndex index = studenttable->currentIndex();
    QString str = index.data().toString();
    lineEdit->setText(str);
}

schoolmasterwindow::~schoolmasterwindow()
{
    delete db;
    delete model;
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
    delete grid_teacher;
    delete Teachers;
    delete tename;
    delete teacher_name;
    delete horizontalSpacer;
    delete tefamily;
    delete treacher_family;
    delete horizontalSpacer_2;
    delete access;
    delete accesspass;
    delete addteacher;
    delete menubar;
    delete menuFile;
    delete menuHelp;
    delete statusbar;
}

