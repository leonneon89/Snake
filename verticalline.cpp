#include "verticalline.h"

VerticalLine::VerticalLine(int x, int y, int length)
{
    for(int i=0; i < length; i++) {
        Point point(x, y + i, '*');
        figure.append(point);
    }
}
