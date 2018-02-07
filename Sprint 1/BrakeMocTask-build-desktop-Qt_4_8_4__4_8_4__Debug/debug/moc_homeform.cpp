/****************************************************************************
** Meta object code from reading C++ file 'homeform.h'
**
** Created: Wed 7. Feb 16:00:03 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BrakeMocTask/homeform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homeform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HomeForm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      37,    9,    9,    9, 0x08,
      61,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HomeForm[] = {
    "HomeForm\0\0on_bt_listorders_clicked()\0"
    "on_bt_general_clicked()\0"
    "on_bt_Intermediat_clicked()\0"
};

void HomeForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HomeForm *_t = static_cast<HomeForm *>(_o);
        switch (_id) {
        case 0: _t->on_bt_listorders_clicked(); break;
        case 1: _t->on_bt_general_clicked(); break;
        case 2: _t->on_bt_Intermediat_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HomeForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HomeForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HomeForm,
      qt_meta_data_HomeForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HomeForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HomeForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HomeForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HomeForm))
        return static_cast<void*>(const_cast< HomeForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int HomeForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
