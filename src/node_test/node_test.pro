TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += ../basis
INCLUDEPATH += /home/anxan/ros2_ws/install/include


TARGET = Node_Test

SOURCES += \
    src/main.cpp
