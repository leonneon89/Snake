#include "snake.h"
#include <windows.h>

Snake::Snake(Point tail, int length, Direction direction)
{
    figure.append(tail);

    Point body = tail;

    for(int i=1; i < length; i++) {
        Point nextPoint = getNextPoint(body, direction);
        figure.append(nextPoint);
        body = nextPoint;
    }
}

void Snake::move(const Direction direction)
{
    draw();

    while(true) {
        setHead(direction);
        delTail();
        Sleep(200);
    }
}

Point Snake::getNextPoint(Point point, Direction direction)
{
    Point nextPoint = point;

    int x = nextPoint.getX();
    int y = nextPoint.getY();

    if(direction == LEFT) {
        nextPoint.setX(--x);
    } else if(direction == RIGHT) {
        nextPoint.setX(++x);
    } else if(direction == UP) {
        nextPoint.setY(--y);
    } else if(direction == DOWN) {
        nextPoint.setY(++y);
    }

    return nextPoint;
}

void Snake::delTail()
{
    Point tail = figure.first();
    figure.pop_front();
    tail.clear();
}

void Snake::setHead(Direction direction)
{
    Point nextPoint = getNextPoint(figure.last(), direction);
    figure.push_back(nextPoint);
    nextPoint.draw();
}
