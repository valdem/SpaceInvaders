#include "defender.h"



void Defender::keyPressEvent(QKeyEvent *event){
    switch (event->key()) {
    case (Qt::Key_A):
        if (pos().x() > 0)
            setPos(x()-20, y());
    break;
    case (Qt::Key_D):
        if (pos().x() + 100 < 1024)
            setPos(x()+20, y());
    break;
    case (Qt::Key_Space):
        Bullet* bullet = new Bullet();
        bullet->setPos(x()+rect().width()/2,y());
        scene()->addItem(bullet);
    }

}

void Defender:: spawn() {
    Invader* invader = new Invader();
    scene()->addItem(invader);
}
