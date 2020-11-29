#ifndef DEFENDER_H
#define DEFENDER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>
#include <QPixmap>

#include "bullet.h"
#include "invader.h"


class Defender: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Defender();
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
};

#endif // DEFENDER_H
