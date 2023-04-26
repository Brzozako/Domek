#include "shape.h"
#include <iostream>
using namespace std;

class RTriangle : public Shape {
public:
    using Shape::Shape;
    RTriangle(int h, char s, string c);

    void Fill();
    void Alloc();
    void Print();

};