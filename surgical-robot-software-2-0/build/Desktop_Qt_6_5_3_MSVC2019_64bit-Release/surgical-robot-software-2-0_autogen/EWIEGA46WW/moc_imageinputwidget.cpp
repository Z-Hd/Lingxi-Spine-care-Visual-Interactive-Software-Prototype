/****************************************************************************
** Meta object code from reading C++ file 'imageinputwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../imageinputwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageinputwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSImageInputWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSImageInputWidgetENDCLASS = QtMocHelpers::stringData(
    "ImageInputWidget",
    "back_to_imageDisplayWidget",
    "",
    "confirmButton_pressed",
    "dicomDataLoaded",
    "folderPath",
    "currentWidgetChanged",
    "widgetName",
    "on_backButton_clicked",
    "on_confirmButton_clicked",
    "on_addButton_clicked",
    "on_deleteButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSImageInputWidgetENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[17];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[16];
    char stringdata5[11];
    char stringdata6[21];
    char stringdata7[11];
    char stringdata8[22];
    char stringdata9[25];
    char stringdata10[21];
    char stringdata11[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSImageInputWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSImageInputWidgetENDCLASS_t qt_meta_stringdata_CLASSImageInputWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "ImageInputWidget"
        QT_MOC_LITERAL(17, 26),  // "back_to_imageDisplayWidget"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 21),  // "confirmButton_pressed"
        QT_MOC_LITERAL(67, 15),  // "dicomDataLoaded"
        QT_MOC_LITERAL(83, 10),  // "folderPath"
        QT_MOC_LITERAL(94, 20),  // "currentWidgetChanged"
        QT_MOC_LITERAL(115, 10),  // "widgetName"
        QT_MOC_LITERAL(126, 21),  // "on_backButton_clicked"
        QT_MOC_LITERAL(148, 24),  // "on_confirmButton_clicked"
        QT_MOC_LITERAL(173, 20),  // "on_addButton_clicked"
        QT_MOC_LITERAL(194, 23)   // "on_deleteButton_clicked"
    },
    "ImageInputWidget",
    "back_to_imageDisplayWidget",
    "",
    "confirmButton_pressed",
    "dicomDataLoaded",
    "folderPath",
    "currentWidgetChanged",
    "widgetName",
    "on_backButton_clicked",
    "on_confirmButton_clicked",
    "on_addButton_clicked",
    "on_deleteButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSImageInputWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    1,   64,    2, 0x06,    3 /* Public */,
       6,    1,   67,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   70,    2, 0x08,    7 /* Private */,
       9,    0,   71,    2, 0x08,    8 /* Private */,
      10,    0,   72,    2, 0x08,    9 /* Private */,
      11,    0,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ImageInputWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSImageInputWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSImageInputWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSImageInputWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ImageInputWidget, std::true_type>,
        // method 'back_to_imageDisplayWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'confirmButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dicomDataLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'currentWidgetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirmButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deleteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ImageInputWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageInputWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->back_to_imageDisplayWidget(); break;
        case 1: _t->confirmButton_pressed(); break;
        case 2: _t->dicomDataLoaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->currentWidgetChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_backButton_clicked(); break;
        case 5: _t->on_confirmButton_clicked(); break;
        case 6: _t->on_addButton_clicked(); break;
        case 7: _t->on_deleteButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageInputWidget::*)();
            if (_t _q_method = &ImageInputWidget::back_to_imageDisplayWidget; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ImageInputWidget::*)();
            if (_t _q_method = &ImageInputWidget::confirmButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ImageInputWidget::*)(const QString & );
            if (_t _q_method = &ImageInputWidget::dicomDataLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ImageInputWidget::*)(const QString & );
            if (_t _q_method = &ImageInputWidget::currentWidgetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *ImageInputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageInputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSImageInputWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageInputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ImageInputWidget::back_to_imageDisplayWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ImageInputWidget::confirmButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ImageInputWidget::dicomDataLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ImageInputWidget::currentWidgetChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
