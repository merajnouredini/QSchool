#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(216, 116);
    this->setMinimumSize(QSize(216, 116));
    this->setMaximumSize(QSize(216, 116));

    submit = new QDialogButtonBox(this);
    submit->setObjectName(QStringLiteral("submit"));
    submit->setGeometry(QRect(30, 80, 150, 24));
    submit->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

    username_field = new QLineEdit(this);
    username_field->setObjectName(QStringLiteral("username_field"));
    username_field->setGeometry(QRect(90, 10, 113, 20));

    password_field = new QLineEdit(this);
    password_field->setObjectName(QStringLiteral("password_field"));
    password_field->setGeometry(QRect(90, 50, 113, 20));
    password_field->setEchoMode(QLineEdit::Password);

    username_label = new QLabel(this);
    username_label->setText(QApplication::translate("user_entrance", "User Name", 0));
    username_label->setObjectName(QStringLiteral("username_label"));
    username_label->setGeometry(QRect(20, 10, 71, 21));

    password_label = new QLabel(this);
    password_label->setText(QApplication::translate("user_entrance", "Passwrod", 0));
    password_label->setObjectName(QStringLiteral("label"));
    password_label->setGeometry(QRect(20, 50, 71, 21));

    connect(submit, SIGNAL(rejected()), this, SLOT(rejected()));
    connect(submit, SIGNAL(accepted()), this, SLOT(accepted()));
    this->setWindowTitle(QApplication::translate("user_entrance", "user_entrance", 0));

}

Widget::~Widget()
{
    delete submit;
    delete username_field;
    delete username_label;
    delete password_field;
    delete password_label;
}

void Widget::rejected()
{
    this->close();
}

void Widget::accepted()
{
    username_field->setText("shalgham");
}
