#ifndef DEFENDER_H
#define DEFENDER_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QKeyEvent>


class Defender: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Defender() {};
    void keyEvent(QKeyEvent* keyEvent);
};

#endif // DEFENDER_H
