QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
INCLUDEPATH += /home/02/lucenko/tools/SFML-2.5.1/include/

 # You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp\


LIBS += /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-system.so.2.5.1\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-graphics.so.2.5.1\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-window.so.2.5.1\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-audio.so.2.5.1\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-system.so.2.5\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-graphics.so.2.5\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-window.so.2.5\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-audio.so.2.5\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-system.so\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-graphics.so\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-window.so\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-audio.so\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-network.so\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-network.so.2.5\
        /home/02/lucenko/tools/SFML-2.5.1/lib/libsfml-network.so.2.5.1

RESOURCES += \
    image.qrc

