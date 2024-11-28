/****************************************************************************
** Meta object code from reading C++ file 'intraoperativeimage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../intraoperativeimage.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intraoperativeimage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS = QtMocHelpers::stringData(
    "IntraoperativeImage",
    "TransverseSliderChange",
    "",
    "value",
    "CoronalSliderChange",
    "SagittalSliderChange",
    "on_Segment_3_clicked",
    "on_refresh_3_clicked",
    "on_actStartCamera_clicked",
    "on_actStopCamera_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[20];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[20];
    char stringdata5[21];
    char stringdata6[21];
    char stringdata7[21];
    char stringdata8[26];
    char stringdata9[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS_t qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "IntraoperativeImage"
        QT_MOC_LITERAL(20, 22),  // "TransverseSliderChange"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 5),  // "value"
        QT_MOC_LITERAL(50, 19),  // "CoronalSliderChange"
        QT_MOC_LITERAL(70, 20),  // "SagittalSliderChange"
        QT_MOC_LITERAL(91, 20),  // "on_Segment_3_clicked"
        QT_MOC_LITERAL(112, 20),  // "on_refresh_3_clicked"
        QT_MOC_LITERAL(133, 25),  // "on_actStartCamera_clicked"
        QT_MOC_LITERAL(159, 24)   // "on_actStopCamera_clicked"
    },
    "IntraoperativeImage",
    "TransverseSliderChange",
    "",
    "value",
    "CoronalSliderChange",
    "SagittalSliderChange",
    "on_Segment_3_clicked",
    "on_refresh_3_clicked",
    "on_actStartCamera_clicked",
    "on_actStopCamera_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSIntraoperativeImageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x08,    1 /* Private */,
       4,    1,   59,    2, 0x08,    3 /* Private */,
       5,    1,   62,    2, 0x08,    5 /* Private */,
       6,    0,   65,    2, 0x08,    7 /* Private */,
       7,    0,   66,    2, 0x08,    8 /* Private */,
       8,    0,   67,    2, 0x08,    9 /* Private */,
       9,    0,   68,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject IntraoperativeImage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSIntraoperativeImageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IntraoperativeImage, std::true_type>,
        // method 'TransverseSliderChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'CoronalSliderChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SagittalSliderChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Segment_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_refresh_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actStartCamera_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actStopCamera_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void IntraoperativeImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IntraoperativeImage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->TransverseSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->CoronalSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->SagittalSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_Segment_3_clicked(); break;
        case 4: _t->on_refresh_3_clicked(); break;
        case 5: _t->on_actStartCamera_clicked(); break;
        case 6: _t->on_actStopCamera_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *IntraoperativeImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntraoperativeImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int IntraoperativeImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
