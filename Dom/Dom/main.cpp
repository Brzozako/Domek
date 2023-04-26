#include <iostream>
#include <vector>

using namespace std;

#include "forest.h"
#include "triangle.h"
#include "Rtriangle.h"
#include "border.h"
#include "shape.h"
#include "rectangle.h"

int Tree::counter = 0;
int Shape::counter = 0;

int main() {

    //RTriangle rt(2, '\\', "red");
    Triangle t(5, '^', "green");
    Rectangle r(9, 7, '#', "yellow");
    Border b(5, 10, '|', "cyan");

    //rt.Print();
    t.Print();
    r.Print();
    b.Print();


    return 0;
}