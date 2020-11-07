#include "button.h"

Button::Button(QString text, QGraphicsItem* parent) : QGraphicsRectItem(parent)
{
    setRect(0,0,200,100);
    textItem = new QGraphicsTextItem(text, this);
    textItem->setPos(rect().width()/2 - textItem->boundingRect().width()/2, rect().height()/2 - textItem->boundingRect().height()/2);
    setAcceptHoverEvents(true);
}

void Button::mouseEvent(QGraphicsSceneMouseEvent* event) {
    emit clicked();
}
