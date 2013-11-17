#ifndef SOUNDS_H
#define SOUNDS_H

#include <QApplication>
#include <QMediaPlayer>
#include <QtCore>

class sounds
{
public:
    sounds();
    int getVolumeMusic();
    int getVolumeSFX();
    void setVolumeMusic(int);
    void setVolumeSFX(int);
    void playMusic();
    void playExplosion();
    void playDrop();
};

#endif // SOUNDS_H
