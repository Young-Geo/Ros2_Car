TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
TARGET = ../Ybasis
INCLUDEPATH += /home/anxan/ros2_ws/install/include
HEADERS += \
    afx.h \
    pkt.h \
    xchain.h \
    xlist.h \
    xlog.h \
    xmd5.h \
    xtime.h \
    xserial.h \
    xsocket.h \
    global.h

SOURCES += \
    afx.cpp \
    xlog.cpp \
    pkt.cpp \
    xchain.cpp \
    xlist.cpp \
    xmd5.cpp \
    xtime.cpp \
    xserial.cpp \
    xsocket.cpp \
    global.cpp
