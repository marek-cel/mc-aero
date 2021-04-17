QT += core gui opengl svg xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

unix: greaterThan(QT_MAJOR_VERSION, 4): QT += x11extras

TEMPLATE = app

################################################################################

DESTDIR = $$PWD/../bin
TARGET = mc-aero

################################################################################

CONFIG += c++11

################################################################################

win32: RC_FILE = mc-aero.rc

################################################################################

win32: CONFIG(release, debug|release): QMAKE_CXXFLAGS += -O2
unix:  CONFIG(release, debug|release): QMAKE_CXXFLAGS += -O2

#win32: QMAKE_CXXFLAGS += /Zc:wchar_t

win32: QMAKE_LFLAGS += /INCREMENTAL:NO

################################################################################

DEFINES += QT_DEPRECATED_WARNINGS

DEFINES +=

greaterThan(QT_MAJOR_VERSION, 4):win32: DEFINES += USE_QT5

win32: DEFINES += \
    NOMINMAX \
    WIN32 \
    _WINDOWS \
    _CRT_SECURE_NO_DEPRECATE \
    _SCL_SECURE_NO_WARNINGS \
    _USE_MATH_DEFINES

win32: CONFIG(release, debug|release): DEFINES += NDEBUG
win32: CONFIG(debug, debug|release):   DEFINES += _DEBUG

#CONFIG(release, debug|release): DEFINES += QT_NO_DEBUG_OUTPUT
#DEFINES += QT_NO_DEBUG_OUTPUT

unix: DEFINES += _LINUX_

################################################################################

INCLUDEPATH += ./

unix: INCLUDEPATH += /usr/include/qwt/

win32: INCLUDEPATH += \
    $(QWT_ROOT)/include

################################################################################

win32: LIBS += \
    -L$(QWT_ROOT)/lib

win32: CONFIG(release, debug|release): LIBS += \
    -lqwt

win32: CONFIG(debug, debug|release): LIBS += \
    -lqwtd

unix: LIBS += \
    -L/lib \
    -L/usr/lib \
    -lqwt-qt5

################################################################################

HEADERS += \
    $$PWD/defs.h \
    $$PWD/CoefDrag.h \
    $$PWD/CoefLift.h \
    $$PWD/Document.h

SOURCES += \
    $$PWD/main.cpp \
    $$PWD/CoefDrag.cpp \
    $$PWD/CoefLift.cpp \
    $$PWD/Document.cpp

RESOURCES += \
    $$PWD/mc-aero.qrc

################################################################################

include($$PWD/gui/gui.pri)
