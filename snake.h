#ifndef SNAKE_H
#define SNAKE_H

#include "figure.h"
#include "point.h"
#include "direction.h"
#include <QObject>
#include <windows.h>
#include <boost/thread.hpp>
#include <boost/chrono.hpp>

class Snake : public Figure
{
    Q_OBJECT
public:
    Snake(Point tail, int length, Direction startDirection);
    ~Snake();
    void startMove(const Direction move_direction);
    void startKeyProcess();

private:
    Point getNextPoint(Point point);
    void delTail();
    void setHead();
    void move();
    void keyProcess();

    boost::thread *moveThread;
    boost::thread *keyThread;
    Direction direction;
};

#endif // SNAKE_H
