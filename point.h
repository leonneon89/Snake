#ifndef POINT_H
#define POINT_H

class Point
{
public:
    explicit Point();
    explicit Point(int x, int y, char sym);

    void setX(int x);
    void setY(int y);
    int getX() const;
    int getY() const;
    void setSym(char sym);
    char getSym() const;
    void draw();
    void clear();

private:
    int x_;
    int y_;
    char sym_;
};

#endif // POINT_H
