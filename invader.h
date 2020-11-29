#ifndef INVADER_H
#define INVADER_H

#include <QObject>
#include <QGraphicsItem>

class Invader: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Invader();
public slots:
    void move();
private:
    int _weight;
    int _height;
};

#endif // INVADER_H
