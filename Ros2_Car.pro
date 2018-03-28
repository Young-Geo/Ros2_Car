TEMPLATE = subdirs

SUBDIRS += \
    src/basis \
    src/node_test \
    src/node_motion \
    src/node_imu    \
    src/node_ladar

CONFIG += ordered
