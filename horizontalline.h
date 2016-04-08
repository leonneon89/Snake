#ifndef HORIZONTALLINE_H
#define HORIZONTALLINE_H

#include <QList>
#include "figure.h"
#include "point.h"

class HorizontalLine : public Figure
{
public:
    HorizontalLine(int x, int y, int length);
};

#endif // HORIZONTALLINE_H
