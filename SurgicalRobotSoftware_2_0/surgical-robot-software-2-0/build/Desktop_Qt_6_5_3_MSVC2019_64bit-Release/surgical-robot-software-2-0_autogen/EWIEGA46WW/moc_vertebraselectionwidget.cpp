/****************************************************************************
** Meta object code from reading C++ file 'vertebraselectionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../vertebraselectionwidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vertebraselectionwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS = QtMocHelpers::stringData(
    "VertebraSelectionWidget",
    "confirmButton_pressed",
    "",
    "vertebra",
    "cancelButton_pressed",
    "on_confirmButton_clicked",
    "on_cancelButton_clicked",
    "on_l5LButton_clicked",
    "on_l5RButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[24];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[21];
    char stringdata5[25];
    char stringdata6[24];
    char stringdata7[21];
    char stringdata8[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS_t qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "VertebraSelectionWidget"
        QT_MOC_LITERAL(24, 21),  // "confirmButton_pressed"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 8),  // "vertebra"
        QT_MOC_LITERAL(56, 20),  // "cancelButton_pressed"
        QT_MOC_LITERAL(77, 24),  // "on_confirmButton_clicked"
        QT_MOC_LITERAL(102, 23),  // "on_cancelButton_clicked"
        QT_MOC_LITERAL(126, 20),  // "on_l5LButton_clicked"
        QT_MOC_LITERAL(147, 20)   // "on_l5RButton_clicked"
    },
    "VertebraSelectionWidget",
    "confirmButton_pressed",
    "",
    "vertebra",
    "cancelButton_pressed",
    "on_confirmButton_clicked",
    "on_cancelButton_clicked",
    "on_l5LButton_clicked",
    "on_l5RButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVertebraSelectionWidgetENDCLASS[] = {

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
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    0,   53,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   54,    2, 0x08,    4 /* Private */,
       6,    0,   55,    2, 0x08,    5 /* Private */,
       7,    0,   56,    2, 0x08,    6 /* Private */,
       8,    0,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject VertebraSelectionWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVertebraSelectionWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VertebraSelectionWidget, std::true_type>,
        // method 'confirmButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cancelButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirmButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancelButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_l5LButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_l5RButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void VertebraSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VertebraSelectionWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->confirmButton_pressed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->cancelButton_pressed(); break;
        case 2: _t->on_confirmButton_clicked(); break;
        case 3: _t->on_cancelButton_clicked(); break;
        case 4: _t->on_l5LButton_clicked(); break;
        case 5: _t->on_l5RButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VertebraSelectionWidget::*)(const QString & );
            if (_t _q_method = &VertebraSelectionWidget::confirmButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VertebraSelectionWidget::*)();
            if (_t _q_method = &VertebraSelectionWidget::cancelButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *VertebraSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VertebraSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVertebraSelectionWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VertebraSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VertebraSelectionWidget::confirmButton_pressed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VertebraSelectionWidget::cancelButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
