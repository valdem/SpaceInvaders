#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>


#include "health.h"
#include "score.h"
#include "invader.h"
#include "defender.h"

class Game : public QGraphicsView
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();

    QGraphicsScene* scene;

    Health* health;
    Score* score;
    Invader* invader;
    Defender* defender;

};
#endif // GAME_H
