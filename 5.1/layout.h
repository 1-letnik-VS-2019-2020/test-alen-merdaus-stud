#ifndef LAYOUT_H
#define LAYOUT_H

#include <vector>
#include "view.h"
#include "textview.h"

class Layout {
private:
    std::vector<View*> views;

public:
    void addView(View* view);
    View* getView(int position);

    size_t size();
    void draw();
};

#endif //LAYOUT_H