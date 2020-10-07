#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>

class Health: public QGraphicsTextItem
{
public:
    Health(QGraphicsItem* parent = nullptr);
private:
    int health;
};

#endif // HEALTH_H
