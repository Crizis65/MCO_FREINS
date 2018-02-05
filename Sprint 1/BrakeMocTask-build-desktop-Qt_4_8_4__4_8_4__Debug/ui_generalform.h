/********************************************************************************
** Form generated from reading UI file 'generalform.ui'
**
** Created: Thu 1. Feb 11:53:36 2018
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALFORM_H
#define UI_GENERALFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralForm
{
public:

    void setupUi(QWidget *GeneralForm)
    {
        if (GeneralForm->objectName().isEmpty())
            GeneralForm->setObjectName(QString::fromUtf8("GeneralForm"));
        GeneralForm->resize(400, 300);

        retranslateUi(GeneralForm);

        QMetaObject::connectSlotsByName(GeneralForm);
    } // setupUi

    void retranslateUi(QWidget *GeneralForm)
    {
        GeneralForm->setWindowTitle(QApplication::translate("GeneralForm", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GeneralForm: public Ui_GeneralForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALFORM_H
