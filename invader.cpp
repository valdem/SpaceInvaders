#include "invader.h"
#include "game.h"

extern Game* game;

Invader::Invader()
{
    int _position;
    _position = rand()%(game->_width-100);
    setPos(_position, 0);

    QPixmap pixmap(":/invader2.png");
    setPixmap(pixmap.scaled(QSize(100,100),Qt::KeepAspectRatio));

    QTimer* timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this, SLOT(move()));

    int _time = 75;
    timer->start(_time);

}

void Invader:: move() {
    setPos(x(),y()+10);
    if(pos().y()-pixmap().height()>(game->_height)) {
        game->health->decrease();
        scene()->removeItem(this);
        delete this;
    }
}
