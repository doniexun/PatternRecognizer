/****************************************************************************
** Meta object code from reading C++ file 'trianglerecognizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TriangleRecognizer/trianglerecognizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trianglerecognizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TriangleRecognizer_t {
    QByteArrayData data[1];
    char stringdata[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TriangleRecognizer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TriangleRecognizer_t qt_meta_stringdata_TriangleRecognizer = {
    {
QT_MOC_LITERAL(0, 0, 18)
    },
    "TriangleRecognizer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TriangleRecognizer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TriangleRecognizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TriangleRecognizer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TriangleRecognizer.data,
      qt_meta_data_TriangleRecognizer,  qt_static_metacall, 0, 0}
};


const QMetaObject *TriangleRecognizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TriangleRecognizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TriangleRecognizer.stringdata))
        return static_cast<void*>(const_cast< TriangleRecognizer*>(this));
    if (!strcmp(_clname, "IVerbosePlugin"))
        return static_cast< IVerbosePlugin*>(const_cast< TriangleRecognizer*>(this));
    if (!strcmp(_clname, "ITestMethod"))
        return static_cast< ITestMethod*>(const_cast< TriangleRecognizer*>(this));
    if (!strcmp(_clname, "PatternRecognizer.IVerbosePlugin"))
        return static_cast< IVerbosePlugin*>(const_cast< TriangleRecognizer*>(this));
    if (!strcmp(_clname, "PatternRecognizer.ITestMethod"))
        return static_cast< ITestMethod*>(const_cast< TriangleRecognizer*>(this));
    return QObject::qt_metacast(_clname);
}

int TriangleRecognizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x24, 0x00, 0x50, 0x61, 0x74, 0x74, 0x65, 0x72,
    0x6e, 0x52, 0x65, 0x63, 0x6f, 0x67, 0x6e, 0x69,
    0x7a, 0x65, 0x72, 0x2e, 0x54, 0x72, 0x69, 0x61,
    0x6e, 0x67, 0x6c, 0x65, 0x52, 0x65, 0x63, 0x6f,
    0x67, 0x6e, 0x69, 0x7a, 0x65, 0x72, 0x00, 0x00,
    0x1b, 0x0a, 0x00, 0x00, 0x09, 0x00, 0x63, 0x6c,
    0x61, 0x73, 0x73, 0x4e, 0x61, 0x6d, 0x65, 0x00,
    0x12, 0x00, 0x54, 0x72, 0x69, 0x61, 0x6e, 0x67,
    0x6c, 0x65, 0x52, 0x65, 0x63, 0x6f, 0x67, 0x6e,
    0x69, 0x7a, 0x65, 0x72, 0x1a, 0x60, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x64, 0x65, 0x62, 0x75, 0x67, 0x00,
    0x15, 0x12, 0x00, 0x00, 0x08, 0x00, 0x4d, 0x65,
    0x74, 0x61, 0x44, 0x61, 0x74, 0x61, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
    0x74, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    0x71, 0x62, 0x6a, 0x73, 0x01, 0x00, 0x00, 0x00,
    0xb0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 0x49, 0x49, 0x44, 0x00, 0x00, 0x00,
    0x24, 0x00, 0x50, 0x61, 0x74, 0x74, 0x65, 0x72,
    0x6e, 0x52, 0x65, 0x63, 0x6f, 0x67, 0x6e, 0x69,
    0x7a, 0x65, 0x72, 0x2e, 0x54, 0x72, 0x69, 0x61,
    0x6e, 0x67, 0x6c, 0x65, 0x52, 0x65, 0x63, 0x6f,
    0x67, 0x6e, 0x69, 0x7a, 0x65, 0x72, 0x00, 0x00,
    0x15, 0x0a, 0x00, 0x00, 0x08, 0x00, 0x4d, 0x65,
    0x74, 0x61, 0x44, 0x61, 0x74, 0x61, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9b, 0x0d, 0x00, 0x00,
    0x09, 0x00, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x4e,
    0x61, 0x6d, 0x65, 0x00, 0x12, 0x00, 0x54, 0x72,
    0x69, 0x61, 0x6e, 0x67, 0x6c, 0x65, 0x52, 0x65,
    0x63, 0x6f, 0x67, 0x6e, 0x69, 0x7a, 0x65, 0x72,
    0x31, 0x00, 0x00, 0x00, 0x05, 0x00, 0x64, 0x65,
    0x62, 0x75, 0x67, 0x00, 0x1a, 0x60, 0xa0, 0x00,
    0x07, 0x00, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x40, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(TriangleRecognizer, TriangleRecognizer)

QT_END_MOC_NAMESPACE