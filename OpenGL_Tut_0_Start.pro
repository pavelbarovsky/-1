TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        drawLibBarovsky.cpp \
        main.cpp

#LIBS+=-lglut -lGL -lGLU # linux libs # without qt =)

#INCLUDEPATH += C:\Qt\freeglut\include
INCLUDEPATH += _PRO_FILE_PWD_\Gl

#LIBS += -LC:\Qt\freeglut\lib  \
LIBS += -L$$_PRO_FILE_PWD_\lib  \
    -lfreeglut \
   -lopengl32   # windows libs

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

HEADERS += \
    drawLibBarovsky.h




