#ifndef VERTICALLINE_H
#define VERTICALLINE_H

#include <QList>
#include "figure.h"
#include "point.h"

class VerticalLine : public Figure
{
    Q_OBJECT
public:
    VerticalLine(int x, int y, int length);
};

#endif // VERTICALLINE_H
