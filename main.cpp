#include <QCoreApplication>
#include <QDebug>
#include "point.h"
#include "horizontalline.h"
#include "verticalline.h"
#include "figure.h"
#include "snake.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    Point p1(10, 10, '*');
//    p1.draw();

//    HorizontalLine hLine(20, 30, 15);
//    hLine.draw();

//    VerticalLine vLine(20, 31, 15);
//    vLine.draw();

//    Point p2(21, 31, 'H');
//    p2.draw();

    Point p3(30, 30, '*');

    Snake snake(p3, 10, UP);
    snake.draw();

    snake.startMove(RIGHT);

    return a.exec();
}
