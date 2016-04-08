#include "figure.h"

Figure::Figure()
{
}

void Figure::draw()
{
    foreach (Point p, figure) {
        p.draw();
    }
}
