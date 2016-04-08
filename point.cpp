#include "point.h"
#include <windows.h>
#include <iostream>

Point::Point()
{
}

Point::Point(int x, int y, char sym) :
    x_(x), y_(y), sym_(sym)
{
}

void Point::setX(int x) {
    x_ = x;
}

void Point::setY(int y) {
    y_ = y;
}

int Point::getX() const
{
    return x_;
}

int Point::getY() const
{
    return y_;
}

void Point::setSym(char sym)
{
    sym_ = sym;
}

char Point::getSym() const
{
    return sym_;
}

void Point::draw()
{
    COORD cord;
    cord.X = x_;
    cord.Y = y_;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
    std::cout << sym_;
}

void Point::clear()
{
    COORD cord;
    cord.X = x_;
    cord.Y = y_;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
    std::cout << " ";
}
