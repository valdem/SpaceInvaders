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
    ~Game(){};

    QGraphicsScene* scene;

    void MainMenu();

    Health* health;
    Score* score;
    Invader* invader;
    Defender* defender;
public slots:
    void playGame();
};
#endif // GAME_H
