#ifndef SNAKE_H
#define SNAKE_H

#include "figure.h"
#include "point.h"
#include "direction.h"

class Snake : public Figure
{
public:
    Snake(Point tail, int length, Direction direction);
    void move(const Direction direction);

private:
    Point getNextPoint(Point point, Direction direction);
    void delTail();
    void setHead(Direction direction);
};

#endif // SNAKE_H
