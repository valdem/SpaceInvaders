#ifndef BUTTON_H
#define BUTTON_H

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QObject>

class Button : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Button(QString text, QGraphicsItem* parent=NULL);
    void mouseEvent(QGraphicsSceneMouseEvent* event);
    QGraphicsTextItem* textItem;
signals:
    void clicked();

};

#endif // BUTTON_H
