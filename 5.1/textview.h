#ifndef TEXTVIEW_H
#define TEXTVIEW_H

#include <string>
#include "view.h"

class TextView : public View {
private:
    std::string text;
    bool capitalize;

public:
    TextView();
    TextView(Position position, Size size, std::string text, bool capitalize);

    void setText(std::string text);
    void setCapitalize(bool capitalize);

    std::string getText() const;
    bool getCapitalize() const;

    void draw();
};

#endif // TEXTVIEW_H