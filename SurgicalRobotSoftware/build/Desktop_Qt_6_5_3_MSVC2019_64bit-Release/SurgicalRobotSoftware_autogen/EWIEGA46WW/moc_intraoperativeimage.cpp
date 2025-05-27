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
    "preButton_pressed",
    "",
    "buildArmMonitor",
    "num",
    "TransverseSliderChange",
    "value",
    "CoronalSliderChange",
    "SagittalSliderChange",
    "on_Segment_3_clicked",
    "on_refresh_3_clicked",
    "on_actStartCamera_clicked",
    "on_actStopCamera_clicked",
    "on_updatePositionButton_clicked",
    "on_previousPage_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[20];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[4];
    char stringdata5[23];
    char stringdata6[6];
    char stringdata7[20];
    char stringdata8[21];
    char stringdata9[21];
    char stringdata10[21];
    char stringdata11[26];
    char stringdata12[25];
    char stringdata13[32];
    char stringdata14[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS_t qt_meta_stringdata_CLASSIntraoperativeImageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "IntraoperativeImage"
        QT_MOC_LITERAL(20, 17),  // "preButton_pressed"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 15),  // "buildArmMonitor"
        QT_MOC_LITERAL(55, 3),  // "num"
        QT_MOC_LITERAL(59, 22),  // "TransverseSliderChange"
        QT_MOC_LITERAL(82, 5),  // "value"
        QT_MOC_LITERAL(88, 19),  // "CoronalSliderChange"
        QT_MOC_LITERAL(108, 20),  // "SagittalSliderChange"
        QT_MOC_LITERAL(129, 20),  // "on_Segment_3_clicked"
        QT_MOC_LITERAL(150, 20),  // "on_refresh_3_clicked"
        QT_MOC_LITERAL(171, 25),  // "on_actStartCamera_clicked"
        QT_MOC_LITERAL(197, 24),  // "on_actStopCamera_clicked"
        QT_MOC_LITERAL(222, 31),  // "on_updatePositionButton_clicked"
        QT_MOC_LITERAL(254, 23)   // "on_previousPage_clicked"
    },
    "IntraoperativeImage",
    "preButton_pressed",
    "",
    "buildArmMonitor",
    "num",
    "TransverseSliderChange",
    "value",
    "CoronalSliderChange",
    "SagittalSliderChange",
    "on_Segment_3_clicked",
    "on_refresh_3_clicked",
    "on_actStartCamera_clicked",
    "on_actStopCamera_clicked",
    "on_updatePositionButton_clicked",
    "on_previousPage_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSIntraoperativeImageENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    1,   81,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   84,    2, 0x08,    4 /* Private */,
       7,    1,   87,    2, 0x08,    6 /* Private */,
       8,    1,   90,    2, 0x08,    8 /* Private */,
       9,    0,   93,    2, 0x08,   10 /* Private */,
      10,    0,   94,    2, 0x08,   11 /* Private */,
      11,    0,   95,    2, 0x08,   12 /* Private */,
      12,    0,   96,    2, 0x08,   13 /* Private */,
      13,    0,   97,    2, 0x08,   14 /* Private */,
      14,    0,   98,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
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
        // method 'preButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buildArmMonitor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updatePositionButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_previousPage_clicked'
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
        case 0: _t->preButton_pressed(); break;
        case 1: _t->buildArmMonitor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->TransverseSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->CoronalSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->SagittalSliderChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_Segment_3_clicked(); break;
        case 6: _t->on_refresh_3_clicked(); break;
        case 7: _t->on_actStartCamera_clicked(); break;
        case 8: _t->on_actStopCamera_clicked(); break;
        case 9: _t->on_updatePositionButton_clicked(); break;
        case 10: _t->on_previousPage_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IntraoperativeImage::*)();
            if (_t _q_method = &IntraoperativeImage::preButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IntraoperativeImage::*)(int );
            if (_t _q_method = &IntraoperativeImage::buildArmMonitor; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void IntraoperativeImage::preButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void IntraoperativeImage::buildArmMonitor(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
