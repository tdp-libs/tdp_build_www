QT -= core gui widgets

TARGET = run_server
TEMPLATE = app

SOURCES += src/main.cpp

project_dir = $$absolute_path("../../", $$PWD)
build_dir   = $$absolute_path("../../", $$shadowed($$PWD))

DEFINES += PROJECT_DIR=\\\"$$project_dir\\\"
DEFINES += BUILD_DIR=\\\"$$build_dir\\\"
