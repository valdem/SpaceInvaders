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
#include "button.h"

class Game : public QGraphicsView
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game(){};

    QGraphicsScene* scene;

    Health* health;
    Score* score;
    Invader* invader;
    Defender* defender;
public slots:
    void MainMenu();
    void playGame();
};
#endif // GAME_H
