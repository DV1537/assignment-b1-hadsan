#ifndef FIGURE_H
#define FIGURE_H
#include <string>
#include <iostream>
#include "Polygon.h"
#include "BoundingBox.h"

class Figure
{
    private:
        int Shapes;
        int capacity;
        Polygon *pPtr;
    public:
        Figure();
        ~Figure();
        void addShape(Polygon *polygon);
        Polygon getFirstShape();
        BoundingBox getBoundingBox();
};

#endif