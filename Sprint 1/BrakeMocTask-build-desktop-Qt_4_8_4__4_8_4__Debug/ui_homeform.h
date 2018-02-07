/********************************************************************************
** Form generated from reading UI file 'homeform.ui'
**
** Created: Wed 7. Feb 15:57:19 2018
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEFORM_H
#define UI_HOMEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeForm
{
public:
    QPushButton *bt_general;
    QPushButton *bt_Intermediat;
    QFrame *line;
    QPushButton *bt_listorders;

    void setupUi(QWidget *HomeForm)
    {
        if (HomeForm->objectName().isEmpty())
            HomeForm->setObjectName(QString::fromUtf8("HomeForm"));
        HomeForm->resize(207, 232);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        HomeForm->setPalette(palette);
        bt_general = new QPushButton(HomeForm);
        bt_general->setObjectName(QString::fromUtf8("bt_general"));
        bt_general->setGeometry(QRect(130, 140, 75, 23));
        bt_general->setCursor(QCursor(Qt::PointingHandCursor));
        bt_Intermediat = new QPushButton(HomeForm);
        bt_Intermediat->setObjectName(QString::fromUtf8("bt_Intermediat"));
        bt_Intermediat->setGeometry(QRect(130, 170, 75, 23));
        bt_Intermediat->setCursor(QCursor(Qt::PointingHandCursor));
        bt_Intermediat->setAutoFillBackground(false);
        line = new QFrame(HomeForm);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-13, 70, 251, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        bt_listorders = new QPushButton(HomeForm);
        bt_listorders->setObjectName(QString::fromUtf8("bt_listorders"));
        bt_listorders->setGeometry(QRect(130, 110, 75, 23));
        bt_listorders->setCursor(QCursor(Qt::PointingHandCursor));
        bt_listorders->setAcceptDrops(false);

        retranslateUi(HomeForm);

        QMetaObject::connectSlotsByName(HomeForm);
    } // setupUi

    void retranslateUi(QWidget *HomeForm)
    {
        HomeForm->setWindowTitle(QApplication::translate("HomeForm", "HomeForm", 0, QApplication::UnicodeUTF8));
        bt_general->setText(QApplication::translate("HomeForm", "General", 0, QApplication::UnicodeUTF8));
        bt_Intermediat->setText(QApplication::translate("HomeForm", "Intermediat", 0, QApplication::UnicodeUTF8));
        bt_listorders->setText(QApplication::translate("HomeForm", "List Orders", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HomeForm: public Ui_HomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEFORM_H
