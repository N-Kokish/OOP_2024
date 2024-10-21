TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        enemy.cpp \
        game.cpp \
        gameobject.cpp \
        level.cpp \
        main.cpp \
        player.cpp

HEADERS += \
    enemy.h \
    game.h \
    gameobject.h \
    level.h \
    player.h
