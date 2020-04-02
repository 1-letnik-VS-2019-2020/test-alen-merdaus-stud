#ifndef SIZE_H
#define SIZE_H

#include <string>

class Size {
private:
    float width;
    float height;
    std::string unit;

public:
    Size();
    Size(float width, float height, std::string unit);

    void setWidth(float width);
    void setHeight(float height);
    void setUnit(std::string unit);

    float getWidth() const;
    float getHeight() const;
    std::string getUnit() const;
    
    std::string toString() const;
};

#endif // SIZE_H