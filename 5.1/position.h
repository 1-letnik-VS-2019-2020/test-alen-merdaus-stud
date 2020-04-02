#ifndef POSITION_H
#define POSITION_H

#include <string>

class Position {
private:
    float x;
    float y;

public:
    Position();
    Position(float x, float y);

    void setX(float x);
    void setY(float y);

    float getX() const;
    float getY() const;


    std::string toString() const;
};

#endif // POSITION_H