#include "health.h"

Health::Health(QGraphicsItem* parent)
{
    health = 3;

    setDefaultTextColor(Qt::white);
    setPlainText(QString("Health: ")+QString::number(health));
}
