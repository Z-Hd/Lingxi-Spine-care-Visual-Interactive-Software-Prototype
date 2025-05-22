/****************************************************************************
** Meta object code from reading C++ file 'routeplan2widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../routeplan2widget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'routeplan2widget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS = QtMocHelpers::stringData(
    "RoutePlan2Widget",
    "back_to_vertebraSelectionWidget",
    "",
    "nextButton_pressed",
    "on_addRouteButton_clicked",
    "handleVertebraSelected",
    "vertebra",
    "handleSelectionCanceled",
    "on_nextButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[26];
    char stringdata5[23];
    char stringdata6[9];
    char stringdata7[24];
    char stringdata8[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS_t qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "RoutePlan2Widget"
        QT_MOC_LITERAL(17, 31),  // "back_to_vertebraSelectionWidget"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 18),  // "nextButton_pressed"
        QT_MOC_LITERAL(69, 25),  // "on_addRouteButton_clicked"
        QT_MOC_LITERAL(95, 22),  // "handleVertebraSelected"
        QT_MOC_LITERAL(118, 8),  // "vertebra"
        QT_MOC_LITERAL(127, 23),  // "handleSelectionCanceled"
        QT_MOC_LITERAL(151, 21)   // "on_nextButton_clicked"
    },
    "RoutePlan2Widget",
    "back_to_vertebraSelectionWidget",
    "",
    "nextButton_pressed",
    "on_addRouteButton_clicked",
    "handleVertebraSelected",
    "vertebra",
    "handleSelectionCanceled",
    "on_nextButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRoutePlan2WidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    1,   53,    2, 0x08,    4 /* Private */,
       7,    0,   56,    2, 0x08,    6 /* Private */,
       8,    0,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RoutePlan2Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRoutePlan2WidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RoutePlan2Widget, std::true_type>,
        // method 'back_to_vertebraSelectionWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addRouteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleVertebraSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleSelectionCanceled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_nextButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void RoutePlan2Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoutePlan2Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->back_to_vertebraSelectionWidget(); break;
        case 1: _t->nextButton_pressed(); break;
        case 2: _t->on_addRouteButton_clicked(); break;
        case 3: _t->handleVertebraSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->handleSelectionCanceled(); break;
        case 5: _t->on_nextButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoutePlan2Widget::*)();
            if (_t _q_method = &RoutePlan2Widget::back_to_vertebraSelectionWidget; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoutePlan2Widget::*)();
            if (_t _q_method = &RoutePlan2Widget::nextButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *RoutePlan2Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoutePlan2Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRoutePlan2WidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RoutePlan2Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RoutePlan2Widget::back_to_vertebraSelectionWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RoutePlan2Widget::nextButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
