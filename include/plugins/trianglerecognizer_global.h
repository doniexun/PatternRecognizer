#ifndef TRIANGLERECOGNIZER_GLOBAL_H
#define TRIANGLERECOGNIZER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TRIANGLERECOGNIZER_LIBRARY)
#  define TRIANGLERECOGNIZERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TRIANGLERECOGNIZERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TRIANGLERECOGNIZER_GLOBAL_H
