#include "health.h"
#include "game.h"

extern Game* game;

Health::Health(QGraphicsItem* parent)
{
    health = 3;

    setDefaultTextColor(Qt::white);
    setPlainText(QString("Health: ") + QString::number(health));
}

void Health:: decrease() {
    health--;

    if(health<1) {
        game->GameOver();
    }
    else {
        setPlainText(QString("Health: ") + QString::number(health));
    }
}
