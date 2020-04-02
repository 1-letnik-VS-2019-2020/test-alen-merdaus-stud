#include "size.h"

#include <iostream>
#include <sstream>

Size::Size(float width, float height, std::string unit) : width(width), height(height), unit(unit) {}

std::string Size::toString() const {
    std::stringstream str;
    str << "Width: " << width << "  Height: " << height ;
    return str.str();
}

void Size::setWidth(float width) {this->width=width;}
void Size::setHeight(float height) {this->height=height;}
void Size::setUnit(std::string unit) {this->unit=unit;}

float Size::getWidth() const {return width;}
float Size::getHeight() const {return height;}
std::string Size::getUnit() const {return unit;}