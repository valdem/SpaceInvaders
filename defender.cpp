#include "defender.h"
#include <iostream>

void Defender::keyEvent(QKeyEvent* event) {
    switch (event->key()) {
        case Qt::Key_A :
            std::cout<<"AAA"<<std::endl;
            setPos(x()-20,y());
        break;
        case Qt::Key_D :
            setPos(x()+20,y());
        break;

    }
}
