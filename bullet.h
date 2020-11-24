#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QDebug>

#include "invader.h"


class Bullet: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();
public slots:
    void onMove();
};

#endif // BULLET_H
