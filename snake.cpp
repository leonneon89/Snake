#include "snake.h"
#include <windows.h>
#include <QDebug>
#include <conio.h>

Snake::Snake(Point tail, int length, Direction startDirection): direction(startDirection)
{    
    moveThread = NULL;
    keyThread = NULL;

    figure.append(tail);

    Point body = tail;

    for(int i=1; i < length; i++) {
        Point nextPoint = getNextPoint(body);
        figure.append(nextPoint);
        body = nextPoint;
    }

    startKeyProcess();
}

Snake::~Snake()
{
    if(moveThread!= NULL){
        moveThread->join();
        delete moveThread;
        moveThread = NULL;
    }

    if(keyThread!= NULL){
        keyThread->join();
        delete keyThread;
        keyThread = NULL;
    }
}

void Snake::move()
{
    draw();

    while(true) {
        setHead();
        delTail();
        Sleep(200);
    }
}

void Snake::startMove(const Direction move_direction)
{
    direction = move_direction;
    moveThread = new boost::thread(boost::bind(&Snake::move, this));
}

void Snake::startKeyProcess()
{
    keyThread = new boost::thread(boost::bind(&Snake::keyProcess, this));
}

void Snake::keyProcess()
{
    int keyNum = 0;
    while(true) {
        if(kbhit()) {
            keyNum = getch();
            if(keyNum == UP_KEY && direction!= DOWN) {
                direction = UP;
            }else if(keyNum == DOWN_KEY && direction!= UP) {
                direction = DOWN;
            }else if(keyNum == LEFT_KEY && direction!= RIGHT) {
                direction = LEFT;
            }else if(keyNum == RIGHT_KEY && direction!= LEFT) {
                direction = RIGHT;
            }
        }
    }
}

Point Snake::getNextPoint(Point point)
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

void Snake::setHead()
{
    Point nextPoint = getNextPoint(figure.last());
    figure.push_back(nextPoint);
    nextPoint.draw();
}
