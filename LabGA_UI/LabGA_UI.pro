QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    *.cpp \
    lab11/EllipticCurve.cpp \
    lab11/LAlab11.cpp \
    lab11/Point.cpp \
    lab12/pointDegree.cpp \
    lab7/OrderOfElement.cpp

HEADERS += \
    *.h \
    lab11/EllipticCurve.h \
    lab11/Point.h \
    lab12/pointDegree.h \
    lab7/OrderOfElement.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
