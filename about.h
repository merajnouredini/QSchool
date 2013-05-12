#ifndef ABOUT_H
#define ABOUT_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QGridLayout>
#include <QHeaderView>
#include <QTextEdit>

class About : public QDialog
{
     Q_OBJECT
public:
    About();
    QGridLayout *gridLayout;
    QTextEdit *ABOUT;
    ~About();

};

#endif
