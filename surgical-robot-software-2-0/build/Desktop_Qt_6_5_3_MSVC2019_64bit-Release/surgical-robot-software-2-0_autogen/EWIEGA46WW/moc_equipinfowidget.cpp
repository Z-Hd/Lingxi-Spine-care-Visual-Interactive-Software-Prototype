/****************************************************************************
** Meta object code from reading C++ file 'equipinfowidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../equipinfowidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'equipinfowidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS = QtMocHelpers::stringData(
    "EquipInfoWidget",
    "confirmButton_pressed",
    "",
    "itemNameSelected",
    "itemName",
    "on_confirmButton_clicked",
    "on_toollistWidget_itemClicked",
    "QListWidgetItem*",
    "item"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[16];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[9];
    char stringdata5[25];
    char stringdata6[30];
    char stringdata7[17];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS_t qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "EquipInfoWidget"
        QT_MOC_LITERAL(16, 21),  // "confirmButton_pressed"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 16),  // "itemNameSelected"
        QT_MOC_LITERAL(56, 8),  // "itemName"
        QT_MOC_LITERAL(65, 24),  // "on_confirmButton_clicked"
        QT_MOC_LITERAL(90, 29),  // "on_toollistWidget_itemClicked"
        QT_MOC_LITERAL(120, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(137, 4)   // "item"
    },
    "EquipInfoWidget",
    "confirmButton_pressed",
    "",
    "itemNameSelected",
    "itemName",
    "on_confirmButton_clicked",
    "on_toollistWidget_itemClicked",
    "QListWidgetItem*",
    "item"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEquipInfoWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    1,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   42,    2, 0x08,    4 /* Private */,
       6,    1,   43,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject EquipInfoWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEquipInfoWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EquipInfoWidget, std::true_type>,
        // method 'confirmButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemNameSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_confirmButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toollistWidget_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>
    >,
    nullptr
} };

void EquipInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EquipInfoWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->confirmButton_pressed(); break;
        case 1: _t->itemNameSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_confirmButton_clicked(); break;
        case 3: _t->on_toollistWidget_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EquipInfoWidget::*)();
            if (_t _q_method = &EquipInfoWidget::confirmButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EquipInfoWidget::*)(const QString & );
            if (_t _q_method = &EquipInfoWidget::itemNameSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *EquipInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EquipInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEquipInfoWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EquipInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void EquipInfoWidget::confirmButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EquipInfoWidget::itemNameSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
