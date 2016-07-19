/****************************************************************************
** Meta object code from reading C++ file 'browser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../browser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Browser_t {
    QByteArrayData data[14];
    char stringdata[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Browser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Browser_t qt_meta_stringdata_Browser = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 20),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 21),
QT_MOC_LITERAL(4, 52, 2),
QT_MOC_LITERAL(5, 55, 21),
QT_MOC_LITERAL(6, 77, 8),
QT_MOC_LITERAL(7, 86, 21),
QT_MOC_LITERAL(8, 108, 5),
QT_MOC_LITERAL(9, 114, 20),
QT_MOC_LITERAL(10, 135, 21),
QT_MOC_LITERAL(11, 157, 20),
QT_MOC_LITERAL(12, 178, 18),
QT_MOC_LITERAL(13, 197, 14)
    },
    "Browser\0onWebViewLoadStarted\0\0"
    "onWebViewLoadFinished\0ok\0onWebViewLoadProgress\0"
    "progress\0onWebViewTitleChanged\0title\0"
    "onButtonLoginClicked\0onButtonLogoutClicked\0"
    "onButtonShareClicked\0onButtonAddClicked\0"
    "onTimerTimeout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Browser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    1,   60,    2, 0x08,
       5,    1,   63,    2, 0x08,
       7,    1,   66,    2, 0x08,
       9,    0,   69,    2, 0x08,
      10,    0,   70,    2, 0x08,
      11,    0,   71,    2, 0x08,
      12,    0,   72,    2, 0x08,
      13,    0,   73,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Browser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Browser *_t = static_cast<Browser *>(_o);
        switch (_id) {
        case 0: _t->onWebViewLoadStarted(); break;
        case 1: _t->onWebViewLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onWebViewLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onWebViewTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onButtonLoginClicked(); break;
        case 5: _t->onButtonLogoutClicked(); break;
        case 6: _t->onButtonShareClicked(); break;
        case 7: _t->onButtonAddClicked(); break;
        case 8: _t->onTimerTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject Browser::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Browser.data,
      qt_meta_data_Browser,  qt_static_metacall, 0, 0}
};


const QMetaObject *Browser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Browser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Browser.stringdata))
        return static_cast<void*>(const_cast< Browser*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Browser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
