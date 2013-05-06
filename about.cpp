#include "about.h"

About::About()
{
    this->resize(206, 142);
    gridLayout = new QGridLayout(this);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));

    ABOUT = new QTextEdit(this);
    ABOUT->setObjectName(QStringLiteral("ABOUT"));
    ABOUT->setEnabled(false);

    QFont font;
    font.setBold(true);
    font.setWeight(75);
    font.setKerning(true);

    ABOUT->setFont(font);
    ABOUT->setAcceptDrops(false);
    ABOUT->setFrameShape(QFrame::NoFrame);

    gridLayout->addWidget(ABOUT, 0, 0, 1, 1);

    this->setWindowTitle(QApplication::translate("Help", "ABOUT", 0));
    ABOUT->setText("This program was designed \nBy\nHooman Behnejad Fard(HoLANTu)\nAND\nMeraj Nouredini(NULL)\n\nallrights reserved");

}
About::~About()
{
    delete gridLayout;
    delete ABOUT;

}
