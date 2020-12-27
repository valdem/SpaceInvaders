#include "bullet.h"
#include "game.h"

extern Game* game;

Bullet::Bullet()
{
    QPixmap pixmap(":/bullet.png");
    setPixmap(pixmap.scaled(QSize(20,20),Qt::KeepAspectRatio));
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

    if (pos().y()+pixmap().height()<0) {
        scene()->removeItem(this);
        delete this;
    }
}
