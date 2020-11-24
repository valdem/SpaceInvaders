#include "game.h"
#include <QPushButton>
#include <QDebug>
#include <QKeyEvent>

Game::Game(QWidget* parent)
{


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,650);

    _width = 1024;
    _height = 650;

    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, _width, _height);
    setScene(scene);
}

void Game::MainMenu() {
    QPushButton* playButton = new QPushButton();
    playButton->setText("Play");
    playButton->setGeometry(512,325,200,50);

    connect(playButton, SIGNAL(clicked()), this, SLOT(playGame()));
    QGraphicsProxyWidget *proxy = this->scene->addWidget(playButton);
}

void Game::GameOver() {
    QGraphicsTextItem* textGameOver = new QGraphicsTextItem(QString("GAmeOver"));
    textGameOver->setPos(150,150);
    scene->addItem(textGameOver);
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

    QTimer* timer = new QTimer();
    connect(timer,SIGNAL(timeout()),defender,SLOT(spawn()));
    int time = 3000;
    timer->start(time);
}
