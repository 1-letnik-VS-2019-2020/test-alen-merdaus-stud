#include "textview.h"

#include <iostream>
#include <sstream>
#include <cctype>

TextView::TextView(Position position, Size size, std::string text, bool capitalize) : View(position, size), text(text), capitalize(capitalize) {}

void TextView::setText(std::string text) {this->text=text;}
void TextView::setCapitalize(bool capitalize) {this->capitalize=capitalize;}

std::string TextView::getText() const {return text;}
bool TextView::getCapitalize() const {return capitalize;}

void TextView::draw() {
    if(this->getVisible()) {
        std::cout << "X: " << this->getPosition().getX() 
                  << "\nY: " << this->getPosition().getY()
                  << "\nWidth: " << this->getSize().getWidth() << " " << this->getSize().getUnit()
                  << "\nHeight: " << this->getSize().getHeight() << " " << this->getSize().getUnit();
        if(this->getCapitalize()) {
            std::string capitalized = this->getText();
            capitalized[0] = toupper(capitalized[0]);
            std::cout << "\nText: " << capitalized;
        } else {
            std::cout << "\nText: " << this->getText() << "\n";
        }
    }
}