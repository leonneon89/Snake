#ifndef VERTICALLINE_H
#define VERTICALLINE_H

#include <QList>
#include "figure.h"
#include "point.h"

class VerticalLine : public Figure
{
public:
    VerticalLine(int x, int y, int length);
};

#endif // VERTICALLINE_H
