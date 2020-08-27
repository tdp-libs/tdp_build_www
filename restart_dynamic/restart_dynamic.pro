QT -= core gui widgets

TARGET = restart_dynamic
TEMPLATE = app

SOURCES += src/main.cpp

project_dir = $$absolute_path("../../", $$PWD)
build_dir   = $$absolute_path("../../", $$shadowed($$PWD))

DEFINES += TP_WWW_PROJECT_DIR=\\\"$$project_dir\\\"
DEFINES += TP_WWW_BUILD_DIR=\\\"$$build_dir\\\"

linux{
  DEFINES += TP_LINUX
}

include(../../project.inc)

LIBRARYPATHS+=../lib

for(LIBRARYPATH, LIBRARYPATHS) {
  LIBS += -L$${LIBRARYPATH}
}
