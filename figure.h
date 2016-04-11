#ifndef FIGURE_H
#define FIGURE_H

#include "point.h"
#include <QList>
#include <QObject>

class Figure : public QObject
{
    Q_OBJECT
public:
    explicit Figure(QObject *parent = 0);
    virtual ~Figure();
    void draw();

protected:
    QList<Point> figure;
};

#endif // FIGURE_H
