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
    }

}
