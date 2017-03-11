QT += core
QT -= gui

CONFIG += c++14

TARGET = QtMathExamples
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Curious.cpp \
    MultiplePandigital.cpp \
    PalindromicNumber.cpp \
    Pandigital.cpp \
    PermutationGenerator.cpp \
    PrimeTester.cpp \
    TriangleWords.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    Curious.h \
    MultiplePandigital.h \
    PalindromicNumber.h \
    Pandigital.h \
    PermutationGenerator.h \
    PrimeTester.h \
    TriangleWords.h \
    Cards.h \
    Catch.h

INCLUDEPATH += /data/3/soft/devel/gmp/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../data/3/soft/devel/gmp/lib/release/ -lgmp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../data/3/soft/devel/gmp/lib/debug/ -lgmp
else:unix: LIBS += -L$$PWD/../../../../data/3/soft/devel/gmp/lib/ -lgmp

INCLUDEPATH += $$PWD/../../../../data/3/soft/devel/gmp/include
DEPENDPATH += $$PWD/../../../../data/3/soft/devel/gmp/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../data/3/soft/devel/gmp/lib/release/ -lgmpxx
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../data/3/soft/devel/gmp/lib/debug/ -lgmpxx
else:unix: LIBS += -L$$PWD/../../../../data/3/soft/devel/gmp/lib/ -lgmpxx

INCLUDEPATH += $$PWD/../../../../data/3/soft/devel/gmp/include
DEPENDPATH += $$PWD/../../../../data/3/soft/devel/gmp/include
