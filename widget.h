#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialogButtonBox>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QSpacerItem>
#include <QHBoxLayout>
#include "about.h"

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    Widget(QWidget *parent = 0);
    QGridLayout *gridLayout;
    QDialogButtonBox *submit;
    QLineEdit *username_field;
    QLineEdit *password_field;
    QLabel *username_label;
    QLabel *password_label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    ~Widget();

private slots:
    void rejected();
    void accepted();
};

#endif // WIDGET_H
