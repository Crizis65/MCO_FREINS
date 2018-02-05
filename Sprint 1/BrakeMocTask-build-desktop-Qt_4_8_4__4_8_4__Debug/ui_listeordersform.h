/********************************************************************************
** Form generated from reading UI file 'listeordersform.ui'
**
** Created: Thu 1. Feb 11:53:35 2018
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEORDERSFORM_H
#define UI_LISTEORDERSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListeOrdersForm
{
public:

    void setupUi(QWidget *ListeOrdersForm)
    {
        if (ListeOrdersForm->objectName().isEmpty())
            ListeOrdersForm->setObjectName(QString::fromUtf8("ListeOrdersForm"));
        ListeOrdersForm->resize(400, 300);

        retranslateUi(ListeOrdersForm);

        QMetaObject::connectSlotsByName(ListeOrdersForm);
    } // setupUi

    void retranslateUi(QWidget *ListeOrdersForm)
    {
        ListeOrdersForm->setWindowTitle(QApplication::translate("ListeOrdersForm", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ListeOrdersForm: public Ui_ListeOrdersForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEORDERSFORM_H
