#ifndef VIEW_H
#define VIEW_H
#include "position.h"
#include "size.h"

class View {
private:
    Position position;
    Size size;
    bool visible;

public:
    View();
    View(Position position, Size size);
    virtual ~View() = default;

    void setPosition(Position position);
    void setSize(Size size);
    void setVisible(bool visible);

    Position getPosition() const;
    Size getSize() const;
    bool getVisible() const;

    virtual void draw();
};

#endif // VIEW_H