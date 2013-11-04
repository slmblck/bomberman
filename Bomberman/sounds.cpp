#include "sounds.h"

sounds::sounds()
{
}
int sounds::getVolumeMusic()
{
    int volume = 100;
    return volume;
}
int sounds::getVolumeSFX()
{
    int volume = 100;
    return volume;
}
void sounds::setVolumeMusic(int volume)
{
    ;
}
void sounds::setVolumeSFX(int volume)
{
    ;
}

void sounds::playMusic()
{
    QMediaPlayer player;
    player.setVolume(100);
    player.setMedia(QUrl::fromLocalFile("C:\\Users\\D\\soundtestqt\\sounds\\ronald.mp3"));
    player.play();
}
void sounds::playExplosion()
{
    ;
}
void sounds::playDrop()
{
    ;
}
