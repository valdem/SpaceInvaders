#include "game.h"
#include <QPushButton>
#include <QDebug>
#include <QKeyEvent>
#include <QBrush>
#include <QImage>

Game::Game(QWidget* parent)
{


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,650);

    setBackgroundBrush(QBrush(QImage(":/space.png")));

    _width = 1024;
    _height = 650;

    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, _width, _height);
    setScene(scene);
}

void Game::play() {
    scene->clear();

    defender = new Defender();

    defender->setPos(scene->width()/2-defender->pixmap().width()/2,scene->height()-defender->pixmap().height());
    defender->setFlag(QGraphicsItem::ItemIsFocusable);
    defender->setFocus();

    scene->addItem(defender);

    health = new Health();
    scene->addItem(health);

    score = new Score();
    score->setPos(score->x(),score->y()+20);
    scene->addItem(score);

    QTimer* timer = new QTimer();
    connect(timer,SIGNAL(timeout()),defender,SLOT(spawn()));
    int time = 3000;
    timer->start(time);
}

void Game::GameOver() {
    close();
}
