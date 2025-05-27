/****************************************************************************
** Meta object code from reading C++ file 'imagedisplaywidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../imagedisplaywidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagedisplaywidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS = QtMocHelpers::stringData(
    "ImageDisplayWidget",
    "imageInputButton_received",
    "",
    "simulationButton_received",
    "executeWidget_nextButton_pressed",
    "onReceivedSignalFromSegmentation",
    "onReceivedSignalFromExecute"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[19];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[33];
    char stringdata5[33];
    char stringdata6[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS_t qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ImageDisplayWidget"
        QT_MOC_LITERAL(19, 25),  // "imageInputButton_received"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 25),  // "simulationButton_received"
        QT_MOC_LITERAL(72, 32),  // "executeWidget_nextButton_pressed"
        QT_MOC_LITERAL(105, 32),  // "onReceivedSignalFromSegmentation"
        QT_MOC_LITERAL(138, 27)   // "onReceivedSignalFromExecute"
    },
    "ImageDisplayWidget",
    "imageInputButton_received",
    "",
    "simulationButton_received",
    "executeWidget_nextButton_pressed",
    "onReceivedSignalFromSegmentation",
    "onReceivedSignalFromExecute"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSImageDisplayWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    0,   46,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ImageDisplayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSImageDisplayWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ImageDisplayWidget, std::true_type>,
        // method 'imageInputButton_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'simulationButton_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'executeWidget_nextButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReceivedSignalFromSegmentation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReceivedSignalFromExecute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ImageDisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageDisplayWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->imageInputButton_received(); break;
        case 1: _t->simulationButton_received(); break;
        case 2: _t->executeWidget_nextButton_pressed(); break;
        case 3: _t->onReceivedSignalFromSegmentation(); break;
        case 4: _t->onReceivedSignalFromExecute(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageDisplayWidget::*)();
            if (_t _q_method = &ImageDisplayWidget::imageInputButton_received; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ImageDisplayWidget::*)();
            if (_t _q_method = &ImageDisplayWidget::simulationButton_received; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ImageDisplayWidget::*)();
            if (_t _q_method = &ImageDisplayWidget::executeWidget_nextButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *ImageDisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageDisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageDisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ImageDisplayWidget::imageInputButton_received()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ImageDisplayWidget::simulationButton_received()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ImageDisplayWidget::executeWidget_nextButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
