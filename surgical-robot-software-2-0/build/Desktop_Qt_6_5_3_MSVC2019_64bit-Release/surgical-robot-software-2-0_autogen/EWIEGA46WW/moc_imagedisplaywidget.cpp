/****************************************************************************
** Meta object code from reading C++ file 'imagedisplaywidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../imagedisplaywidget.h"
#include <QtGui/qtextcursor.h>
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
    "backButton_received",
    "executeWidget_nextButton_pressed",
    "currentWidgetChanged",
    "widgetName",
    "onReceivedSignalFromSegmentation",
    "onReceivedSignalFromExecute",
    "on_coronalSlider_valueChanged",
    "value",
    "on_sagittalSlider_valueChanged",
    "on_transverseSlider_valueChanged",
    "on_unfoldButton_clicked",
    "on_unfoldButton_2_clicked",
    "on_unfoldButton_3_clicked",
    "on_unfoldButton_4_clicked",
    "on_MPRButton_clicked",
    "on_MPRButton_2_clicked",
    "on_eyeButton_clicked",
    "on_MPRButton_3_clicked",
    "on_rotateButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS_t {
    uint offsetsAndSizes[46];
    char stringdata0[19];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[20];
    char stringdata5[33];
    char stringdata6[21];
    char stringdata7[11];
    char stringdata8[33];
    char stringdata9[28];
    char stringdata10[30];
    char stringdata11[6];
    char stringdata12[31];
    char stringdata13[33];
    char stringdata14[24];
    char stringdata15[26];
    char stringdata16[26];
    char stringdata17[26];
    char stringdata18[21];
    char stringdata19[23];
    char stringdata20[21];
    char stringdata21[23];
    char stringdata22[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS_t qt_meta_stringdata_CLASSImageDisplayWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ImageDisplayWidget"
        QT_MOC_LITERAL(19, 25),  // "imageInputButton_received"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 25),  // "simulationButton_received"
        QT_MOC_LITERAL(72, 19),  // "backButton_received"
        QT_MOC_LITERAL(92, 32),  // "executeWidget_nextButton_pressed"
        QT_MOC_LITERAL(125, 20),  // "currentWidgetChanged"
        QT_MOC_LITERAL(146, 10),  // "widgetName"
        QT_MOC_LITERAL(157, 32),  // "onReceivedSignalFromSegmentation"
        QT_MOC_LITERAL(190, 27),  // "onReceivedSignalFromExecute"
        QT_MOC_LITERAL(218, 29),  // "on_coronalSlider_valueChanged"
        QT_MOC_LITERAL(248, 5),  // "value"
        QT_MOC_LITERAL(254, 30),  // "on_sagittalSlider_valueChanged"
        QT_MOC_LITERAL(285, 32),  // "on_transverseSlider_valueChanged"
        QT_MOC_LITERAL(318, 23),  // "on_unfoldButton_clicked"
        QT_MOC_LITERAL(342, 25),  // "on_unfoldButton_2_clicked"
        QT_MOC_LITERAL(368, 25),  // "on_unfoldButton_3_clicked"
        QT_MOC_LITERAL(394, 25),  // "on_unfoldButton_4_clicked"
        QT_MOC_LITERAL(420, 20),  // "on_MPRButton_clicked"
        QT_MOC_LITERAL(441, 22),  // "on_MPRButton_2_clicked"
        QT_MOC_LITERAL(464, 20),  // "on_eyeButton_clicked"
        QT_MOC_LITERAL(485, 22),  // "on_MPRButton_3_clicked"
        QT_MOC_LITERAL(508, 23)   // "on_rotateButton_clicked"
    },
    "ImageDisplayWidget",
    "imageInputButton_received",
    "",
    "simulationButton_received",
    "backButton_received",
    "executeWidget_nextButton_pressed",
    "currentWidgetChanged",
    "widgetName",
    "onReceivedSignalFromSegmentation",
    "onReceivedSignalFromExecute",
    "on_coronalSlider_valueChanged",
    "value",
    "on_sagittalSlider_valueChanged",
    "on_transverseSlider_valueChanged",
    "on_unfoldButton_clicked",
    "on_unfoldButton_2_clicked",
    "on_unfoldButton_3_clicked",
    "on_unfoldButton_4_clicked",
    "on_MPRButton_clicked",
    "on_MPRButton_2_clicked",
    "on_eyeButton_clicked",
    "on_MPRButton_3_clicked",
    "on_rotateButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSImageDisplayWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,    1 /* Public */,
       3,    0,  129,    2, 0x06,    2 /* Public */,
       4,    0,  130,    2, 0x06,    3 /* Public */,
       5,    0,  131,    2, 0x06,    4 /* Public */,
       6,    1,  132,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  135,    2, 0x0a,    7 /* Public */,
       9,    0,  136,    2, 0x0a,    8 /* Public */,
      10,    1,  137,    2, 0x08,    9 /* Private */,
      12,    1,  140,    2, 0x08,   11 /* Private */,
      13,    1,  143,    2, 0x08,   13 /* Private */,
      14,    0,  146,    2, 0x08,   15 /* Private */,
      15,    0,  147,    2, 0x08,   16 /* Private */,
      16,    0,  148,    2, 0x08,   17 /* Private */,
      17,    0,  149,    2, 0x08,   18 /* Private */,
      18,    0,  150,    2, 0x08,   19 /* Private */,
      19,    0,  151,    2, 0x08,   20 /* Private */,
      20,    0,  152,    2, 0x08,   21 /* Private */,
      21,    0,  153,    2, 0x08,   22 /* Private */,
      22,    0,  154,    2, 0x08,   23 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        // method 'backButton_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'executeWidget_nextButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentWidgetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onReceivedSignalFromSegmentation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onReceivedSignalFromExecute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_coronalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sagittalSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_transverseSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_unfoldButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_unfoldButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_unfoldButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_unfoldButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MPRButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MPRButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_eyeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_MPRButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rotateButton_clicked'
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
        case 2: _t->backButton_received(); break;
        case 3: _t->executeWidget_nextButton_pressed(); break;
        case 4: _t->currentWidgetChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onReceivedSignalFromSegmentation(); break;
        case 6: _t->onReceivedSignalFromExecute(); break;
        case 7: _t->on_coronalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_sagittalSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_transverseSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_unfoldButton_clicked(); break;
        case 11: _t->on_unfoldButton_2_clicked(); break;
        case 12: _t->on_unfoldButton_3_clicked(); break;
        case 13: _t->on_unfoldButton_4_clicked(); break;
        case 14: _t->on_MPRButton_clicked(); break;
        case 15: _t->on_MPRButton_2_clicked(); break;
        case 16: _t->on_eyeButton_clicked(); break;
        case 17: _t->on_MPRButton_3_clicked(); break;
        case 18: _t->on_rotateButton_clicked(); break;
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
            if (_t _q_method = &ImageDisplayWidget::backButton_received; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ImageDisplayWidget::*)();
            if (_t _q_method = &ImageDisplayWidget::executeWidget_nextButton_pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ImageDisplayWidget::*)(const QString & );
            if (_t _q_method = &ImageDisplayWidget::currentWidgetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
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
void ImageDisplayWidget::backButton_received()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ImageDisplayWidget::executeWidget_nextButton_pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ImageDisplayWidget::currentWidgetChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
