/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Media_Center/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      58,   11,   11,   11, 0x08,
      81,   11,   11,   11, 0x08,
     104,   11,   11,   11, 0x08,
     127,   11,   11,   11, 0x08,
     151,   11,   11,   11, 0x08,
     175,   11,   11,   11, 0x08,
     199,   11,   11,   11, 0x08,
     223,   11,   11,   11, 0x08,
     244,   11,   11,   11, 0x08,
     266,   11,   11,   11, 0x08,
     287,   11,   11,   11, 0x08,
     308,   11,   11,   11, 0x08,
     333,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_netflixBtn_clicked()\0"
    "on_skypeBtn_clicked()\0on_moviesBtn_clicked()\0"
    "on_amazonBtn_clicked()\0on_hboNowBtn_clicked()\0"
    "on_youtubeBtn_clicked()\0on_pandoraBtn_clicked()\0"
    "on_twitterBtn_clicked()\0on_spotifyBtn_clicked()\0"
    "on_huluBtn_clicked()\0on_hboGoBtn_clicked()\0"
    "on_espnBtn_clicked()\0on_homeBtn_clicked()\0"
    "StartWebViewTransition()\0ToggleMenu()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_netflixBtn_clicked(); break;
        case 1: _t->on_skypeBtn_clicked(); break;
        case 2: _t->on_moviesBtn_clicked(); break;
        case 3: _t->on_amazonBtn_clicked(); break;
        case 4: _t->on_hboNowBtn_clicked(); break;
        case 5: _t->on_youtubeBtn_clicked(); break;
        case 6: _t->on_pandoraBtn_clicked(); break;
        case 7: _t->on_twitterBtn_clicked(); break;
        case 8: _t->on_spotifyBtn_clicked(); break;
        case 9: _t->on_huluBtn_clicked(); break;
        case 10: _t->on_hboGoBtn_clicked(); break;
        case 11: _t->on_espnBtn_clicked(); break;
        case 12: _t->on_homeBtn_clicked(); break;
        case 13: _t->StartWebViewTransition(); break;
        case 14: _t->ToggleMenu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
