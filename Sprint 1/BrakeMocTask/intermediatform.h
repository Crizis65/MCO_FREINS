#ifndef INTERMEDIATFORM_H
#define INTERMEDIATFORM_H

#include <QWidget>

namespace Ui {
class IntermediatForm;
}

class IntermediatForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit IntermediatForm(QWidget *parent = 0);
    ~IntermediatForm();
    
private:
    Ui::IntermediatForm *ui;
};

#endif // INTERMEDIATFORM_H
