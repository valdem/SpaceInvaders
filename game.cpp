#include "game.h"

Game::Game(QWidget *parent)
{
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 1024, 512);
    setScene(scene);

    health = new Health();
    scene->addItem(health);

    score = new Score();
    score->setPos(score->x(),score->y()+20);
    scene->addItem(score);
}

Game::~Game()
{
}

