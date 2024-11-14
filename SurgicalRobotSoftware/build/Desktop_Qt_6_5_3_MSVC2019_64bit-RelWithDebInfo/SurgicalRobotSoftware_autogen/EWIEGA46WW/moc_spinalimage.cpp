/****************************************************************************
** Meta object code from reading C++ file 'spinalimage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../spinalimage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spinalimage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSpinalImageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSpinalImageENDCLASS = QtMocHelpers::stringData(
    "SpinalImage",
    "nextButton_pressed",
    "",
    "preButton_pressed",
    "on_previousStep1_clicked",
    "on_nextStep1_clicked",
    "axialSliderChange",
    "value",
    "coronalSliderChange",
    "sagittalSliderChange",
    "on_loadImage_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSpinalImageENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[12];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[25];
    char stringdata5[21];
    char stringdata6[18];
    char stringdata7[6];
    char stringdata8[20];
    char stringdata9[21];
    char stringdata10[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSpinalImageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSpinalImageENDCLASS_t qt_meta_stringdata_CLASSSpinalImageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "SpinalImage"
        QT_MOC_LITERAL(12, 18),  // "nextButton_pressed"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 17),  // "preButton_pressed"
        QT_MOC_LITERAL(50, 24),  // "on_previousStep1_clicked"
        QT_MOC_LITERAL(75, 20),  // "on_nextStep1_clicked"
        QT_MOC_LITERAL(96, 17),  // "axialSliderChange"
        QT_MOC_LITERAL(114, 5),  // "value"
        QT_MOC_LITERAL(120, 19),  // "coronalSliderChange"
        QT_MOC_LITERAL(140, 20),  // "sagittalSliderChange"
        QT_MOC_LITERAL(161, 20)   // "on_loadImage_clicked"
    },
    "SpinalImage",
    "nextButton_pressed",
    "",
    "preButton_pressed",
    "on_previousStep1_clicked",
    "on_nextStep1_clicked",
    "axialSliderChange",
    "value",
    "coronalSliderChange",
    "sagittalSliderChange",
    "on_loadImage_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSpinalImageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    1,   66,    2, 0x08,    5 /* Private */,
       8,    1,   69,    2, 0x08,    7 /* Private */,
       9,    1,   72,    2, 0x08,    9 /* Private */,
      10,    0,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SpinalImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSSpinalImageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSpinalImageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSpinalImageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SpinalImage, std::true_type>,
        // method 'nextButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'preButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_previousStep1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_nextStep1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'axialSliderChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'coronalSliderChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sagittalSliderChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_loadImage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SpinalImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpinalImage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nextButton_pressed(); break;
        case 1: _t->preButton_pressed(); break;
        case 2: _t->on_previousStep1_clicked(); break;
        case 3: _t->on_nextStep1_clicked(); break;
        case 4: _t->axialSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->coronalSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->sagittalSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_loadImage_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpinalImage::*)();
            if (_t _q_method = &SpinalImage::nextButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SpinalImage::*)();
            if (_t _q_method = &SpinalImage::preButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *SpinalImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpinalImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSpinalImageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SpinalImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SpinalImage::nextButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SpinalImage::preButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
