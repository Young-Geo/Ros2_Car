TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += ../basis
INCLUDEPATH += /home/anxan/ros2_ws/install/include


TARGET = Node_IMU

SOURCES += \
    src/main.cpp \
    src/solution.cpp \
    src/node_imu.cpp

HEADERS += \
    src/solution.h \
    src/node_imu.h
