#include "bullet.h"
#include "game.h"

extern Game* game;

Bullet::Bullet()
{
    setRect(0,0,10,50);
    QTimer* timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(onMove()));
    timer->start(50);
}

void Bullet:: onMove() {
    QList<QGraphicsItem*> CollidingItems = collidingItems();
    for(int i = 0, n = CollidingItems.size(); i<n; i++ ) {
        bool isInvader = typeid(*(CollidingItems[i])) == typeid (Invader);
        if (isInvader) {
            game->score->increase();
            scene()->removeItem(CollidingItems[i]);
            scene()->removeItem(this);
            delete CollidingItems[i];
            delete this;
            return;
        }
    }
    setPos(x(),y()-10);
    if (pos().y()+rect().height()<0) {
        scene()->removeItem(this);
        delete this;
    }
}
