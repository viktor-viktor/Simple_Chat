/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VideoLecture/login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogIn_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogIn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogIn_t qt_meta_stringdata_LogIn = {
    {
QT_MOC_LITERAL(0, 0, 5), // "LogIn"
QT_MOC_LITERAL(1, 6, 14), // "sCreateAccount"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "sClose"
QT_MOC_LITERAL(4, 29, 9), // "sUserName"
QT_MOC_LITERAL(5, 39, 17), // "slotCreateAccount"
QT_MOC_LITERAL(6, 57, 10), // "slotResult"
QT_MOC_LITERAL(7, 68, 16) // "slotCheckAccount"

    },
    "LogIn\0sCreateAccount\0\0sClose\0sUserName\0"
    "slotCreateAccount\0slotResult\0"
    "slotCheckAccount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogIn[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       4,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   51,    2, 0x08 /* Private */,
       6,    0,   52,    2, 0x0a /* Public */,
       7,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogIn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogIn *_t = static_cast<LogIn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sCreateAccount(); break;
        case 1: _t->sClose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sUserName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotCreateAccount(); break;
        case 4: _t->slotResult(); break;
        case 5: _t->slotCheckAccount(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LogIn::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogIn::sCreateAccount)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LogIn::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogIn::sClose)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LogIn::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LogIn::sUserName)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject LogIn::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogIn.data,
      qt_meta_data_LogIn,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogIn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogIn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogIn.stringdata0))
        return static_cast<void*>(const_cast< LogIn*>(this));
    return QDialog::qt_metacast(_clname);
}

int LogIn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void LogIn::sCreateAccount()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LogIn::sClose(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LogIn::sUserName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
