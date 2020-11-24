#ifndef DEFENDER_H
#define DEFENDER_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>

#include "bullet.h"
#include "invader.h"


class Defender: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();
};

#endif // DEFENDER_H
