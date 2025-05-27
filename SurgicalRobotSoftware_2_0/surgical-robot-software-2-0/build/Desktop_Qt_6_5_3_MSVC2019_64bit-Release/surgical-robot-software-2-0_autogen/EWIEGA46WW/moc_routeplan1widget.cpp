/****************************************************************************
** Meta object code from reading C++ file 'routeplan1widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../routeplan1widget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'routeplan1widget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS = QtMocHelpers::stringData(
    "RoutePlan1Widget",
    "back_to_registrationWidget",
    "",
    "nextButton_pressed",
    "on_addRouteButton_clicked",
    "on_backButton_clicked",
    "handleVertebraSelected",
    "vertebra",
    "handleSelectionCanceled",
    "on_nextButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[17];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[26];
    char stringdata5[22];
    char stringdata6[23];
    char stringdata7[9];
    char stringdata8[24];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS_t qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "RoutePlan1Widget"
        QT_MOC_LITERAL(17, 26),  // "back_to_registrationWidget"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 18),  // "nextButton_pressed"
        QT_MOC_LITERAL(64, 25),  // "on_addRouteButton_clicked"
        QT_MOC_LITERAL(90, 21),  // "on_backButton_clicked"
        QT_MOC_LITERAL(112, 22),  // "handleVertebraSelected"
        QT_MOC_LITERAL(135, 8),  // "vertebra"
        QT_MOC_LITERAL(144, 23),  // "handleSelectionCanceled"
        QT_MOC_LITERAL(168, 21)   // "on_nextButton_clicked"
    },
    "RoutePlan1Widget",
    "back_to_registrationWidget",
    "",
    "nextButton_pressed",
    "on_addRouteButton_clicked",
    "on_backButton_clicked",
    "handleVertebraSelected",
    "vertebra",
    "handleSelectionCanceled",
    "on_nextButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRoutePlan1WidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    1,   60,    2, 0x08,    5 /* Private */,
       8,    0,   63,    2, 0x08,    7 /* Private */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject RoutePlan1Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRoutePlan1WidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RoutePlan1Widget, std::true_type>,
        // method 'back_to_registrationWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addRouteButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backButton_clicked'
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

void RoutePlan1Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RoutePlan1Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->back_to_registrationWidget(); break;
        case 1: _t->nextButton_pressed(); break;
        case 2: _t->on_addRouteButton_clicked(); break;
        case 3: _t->on_backButton_clicked(); break;
        case 4: _t->handleVertebraSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->handleSelectionCanceled(); break;
        case 6: _t->on_nextButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RoutePlan1Widget::*)();
            if (_t _q_method = &RoutePlan1Widget::back_to_registrationWidget; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RoutePlan1Widget::*)();
            if (_t _q_method = &RoutePlan1Widget::nextButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *RoutePlan1Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoutePlan1Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRoutePlan1WidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RoutePlan1Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void RoutePlan1Widget::back_to_registrationWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RoutePlan1Widget::nextButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
