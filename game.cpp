#include "game.h"
#include <iostream>

Game::Game(QWidget* parent)
{


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,768);

    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 1024, 768);
    setScene(scene);
}

void Game::MainMenu() {
    Button* play = new Button(QString("Play"));
    play->setPos(this->width()/2 - play->boundingRect().width()/2, 275);
    connect(play, SIGNAL(clicked()), this, SLOT(playGame()));
    scene->addItem(play);
}

void Game::playGame() {
    scene->clear();


    defender = new Defender();

    defender->setRect(0,0,100,100);
    defender->setPos(scene->width()/2-defender->rect().width()/2,scene->height()-defender->rect().height());
    defender->setFlag(QGraphicsItem::ItemIsFocusable);
    defender->setFocus();

    scene->addItem(defender);

    health = new Health();
    scene->addItem(health);

    score = new Score();
    score->setPos(score->x(),score->y()+20);
    scene->addItem(score);
}
