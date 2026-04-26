#include "header.h"
#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int a = 0, int b = 0) {
        x = a; y = b;
    }

    Point& move(int dx, int dy) {
        this->x += dx;
        this->y += dy;
        return *this;
    }

    void show() {
        cout << "(" << x << ", " << y << ")\n";
    }

    friend void resetPoint(Point* p);
};

void resetPoint(Point* p) {
    p->x = 0;
    p->y = 0;
}


void runProgram() {
    Point p(2, 3);
    p.move(5, 1).move(-2, 4).move(3, -6);
    p.show();
    resetPoint(&p);
    p.show();
}
