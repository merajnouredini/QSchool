#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    Widget(QWidget *parent = 0);
    QDialogButtonBox *submit;
    QLineEdit *username_field;
    QLineEdit *password_field;
    QLabel *username_label;
    QLabel *password_label;
    ~Widget();

public slots:
    void on_submit_rejected();
};

#endif // WIDGET_H
