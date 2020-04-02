#include "layout.h"

int main() {

    Layout layout;    

    layout.addView(new View(Position(0, 0), Size(250, 250, "px")));
    layout.addView(new View(Position(0, 250), Size(50, 200, "pt")));

    layout.getView(1)->setVisible(false);

    layout.addView(new View(Position(500, 0), Size(30.5, 700.7, "čevapov")));
    layout.addView(new TextView(Position(0, 0), Size(250, 250, "cm"), "very text", false));
    layout.addView(new TextView(Position(-50, -200), Size(100, 100, "px"), "some text", true));

    layout.draw();

    for(size_t i=0; i<layout.size(); i++) {
        delete layout.getView(i);
    }

    return 0;
}