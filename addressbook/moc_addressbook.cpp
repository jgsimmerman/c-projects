/****************************************************************************
** Meta object code from reading C++ file 'addressbook.h'
**
** Created: Sun Oct 31 18:35:05 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addressbook.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddressBook[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      26,   12,   12,   12, 0x0a,
      42,   12,   12,   12, 0x0a,
      51,   12,   12,   12, 0x0a,
      58,   12,   12,   12, 0x0a,
      69,   12,   12,   12, 0x0a,
      83,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddressBook[] = {
    "AddressBook\0\0addContact()\0submitContact()\0"
    "cancel()\0next()\0previous()\0editContact()\0"
    "removeContact()\0"
};

const QMetaObject AddressBook::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddressBook,
      qt_meta_data_AddressBook, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddressBook::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddressBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddressBook::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddressBook))
        return static_cast<void*>(const_cast< AddressBook*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddressBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addContact(); break;
        case 1: submitContact(); break;
        case 2: cancel(); break;
        case 3: next(); break;
        case 4: previous(); break;
        case 5: editContact(); break;
        case 6: removeContact(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
