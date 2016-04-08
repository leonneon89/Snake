#include "horizontalline.h"

HorizontalLine::HorizontalLine(int x, int y, int length)
{
    for(int i=0; i < length; i++) {
        Point point(x + i, y, '*');
        figure.append(point);
    }
}
