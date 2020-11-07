#include "score.h"

Score::Score(QGraphicsItem* parent)
{
    _score = 0;
    setPlainText(QString("Score: ") + QString::number(_score));
    setDefaultTextColor(Qt::white);
}
