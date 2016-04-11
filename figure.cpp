#include "figure.h"

Figure::Figure(QObject *parent):
    QObject(parent)
{
}

Figure::~Figure()
{
}

void Figure::draw()
{
    foreach (Point p, figure) {
        p.draw();
    }
}
