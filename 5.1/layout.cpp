#include "layout.h"
#include <iostream>

void Layout::addView(View* view) {views.push_back(view);}
View* Layout::getView(int position) {return views.at(position);}

size_t Layout::size() {return views.size();}

void Layout::draw() {
    for(size_t i=0; i<views.size(); i++) {
        views.at(i)->draw();
        std::cout << "\n";
    }
}