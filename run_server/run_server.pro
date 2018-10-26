QT -= core gui widgets

TARGET = run_server
TEMPLATE = app

SOURCES += src/main.cpp

project_dir = $$absolute_path("../../", $$PWD)
build_dir   = $$absolute_path("../../", $$shadowed($$PWD))

DEFINES += TDP_WWW_PROJECT_DIR=\\\"$$project_dir\\\"
DEFINES += TDP_WWW_BUILD_DIR=\\\"$$build_dir\\\"
