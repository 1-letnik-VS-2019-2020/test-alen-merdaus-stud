#include "position.h"

#include <iostream>
#include <sstream>

using namespace std;

Position::Position(float x, float y) : x(x), y(y) {}

void Position::setX(float x) {this->x=x;}
void Position::setY(float y) {this->y=y;}

float Position::getX() const {return x;}
float Position::getY() const {return y;}

string Position::toString() const {
    stringstream str;
    str << "X: " << x << "  Y: " << y ;
    return str.str();
}