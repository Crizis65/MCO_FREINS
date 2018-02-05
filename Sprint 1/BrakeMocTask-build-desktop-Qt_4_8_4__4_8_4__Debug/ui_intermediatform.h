/********************************************************************************
** Form generated from reading UI file 'intermediatform.ui'
**
** Created: Thu 1. Feb 11:53:36 2018
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERMEDIATFORM_H
#define UI_INTERMEDIATFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntermediatForm
{
public:

    void setupUi(QWidget *IntermediatForm)
    {
        if (IntermediatForm->objectName().isEmpty())
            IntermediatForm->setObjectName(QString::fromUtf8("IntermediatForm"));
        IntermediatForm->resize(400, 300);

        retranslateUi(IntermediatForm);

        QMetaObject::connectSlotsByName(IntermediatForm);
    } // setupUi

    void retranslateUi(QWidget *IntermediatForm)
    {
        IntermediatForm->setWindowTitle(QApplication::translate("IntermediatForm", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IntermediatForm: public Ui_IntermediatForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERMEDIATFORM_H
