#ifndef DEFENDER_H
#define DEFENDER_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QKeyEvent>

#include <QDebug>


class Defender: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // DEFENDER_H
