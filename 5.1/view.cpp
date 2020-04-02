#include <iostream>
#include "view.h"

View::View(Position position, Size size) : position(position), size(size), visible(true) {}

void View::setPosition(Position position) {this->position=position;}
void View::setSize(Size size) {this->size=size;}
void View::setVisible(bool visible) {this->visible=visible;}

Position View::getPosition() const {return position;}
Size View::getSize() const {return size;}
bool View::getVisible() const {return visible;}

void View::draw() {
    if(visible) {
        std::cout << "X: " << this->getPosition().getX()
                  << "\nY: " << this->getPosition().getY()
                  << "\nWidth: " << this->getSize().getWidth() << " " << this->getSize().getUnit()
                  << "\nHeight: " << this->getSize().getHeight() << " " << this->getSize().getUnit() << "\n";
    }
}