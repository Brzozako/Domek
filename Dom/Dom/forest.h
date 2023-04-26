#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
#include "tree.h"
#include "shape.h"

class Forest {
public:
    int H, W;
    int** tab;

    vector<Tree*> trees;

    Forest(int h, int w);
    ~Forest();

    void AddTree(int h, char s, string c, int y, int x);
    void AddRectangle(int h, int w, char s, string c, int y, int x);
    void AddBorder(int h, int w, char s, string c, int y, int x);
    void AddTriangle(int h, int w, char s, string c, int y, int x);
    void PrintForest();

};

