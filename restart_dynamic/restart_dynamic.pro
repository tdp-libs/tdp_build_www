QT -= core gui widgets

TARGET = restart_dynamic
TEMPLATE = app

SOURCES += src/main.cpp

project_dir = $$absolute_path("../../", $$PWD)
build_dir   = $$absolute_path("../../", $$shadowed($$PWD))

include(../../project.inc)
