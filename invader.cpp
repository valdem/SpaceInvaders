#include "invader.h"
#include "game.h"

extern Game* game;

Invader::Invader()
{
    int _position;
    _position = rand()%(game->_width);
    setPos(_position, 0);

    setRect(0,0,100,100);

    QTimer* timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this, SLOT(move()));

    int _time = 75;
    timer->start(_time);

}

void Invader:: move() {
    setPos(x(),y()+10);
    if(pos().y()-rect().height()>(game->_height)) {
        game->health->decrease();
        scene()->removeItem(this);
        delete this;
    }
}
