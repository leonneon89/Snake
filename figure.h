#ifndef FIGURE_H
#define FIGURE_H

#include "point.h"
#include <QList>

class Figure
{
public:
    Figure();
    void draw();

protected:
    QList<Point> figure;
};

#endif // FIGURE_H
