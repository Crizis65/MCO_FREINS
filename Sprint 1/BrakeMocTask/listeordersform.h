#ifndef LISTEORDERSFORM_H
#define LISTEORDERSFORM_H

#include <QWidget>

namespace Ui {
class ListeOrdersForm;
}

class ListeOrdersForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit ListeOrdersForm(QWidget *parent = 0);
    ~ListeOrdersForm();
    
private:
    Ui::ListeOrdersForm *ui;
};

#endif // LISTEORDERSFORM_H
