#include <iostream>
#include<cmath>


using namespace std;

class Point{
    float x;
    float y;
    public:
    float getx();
    float gety();
    void setx(float x0);
    void sety(float y0);
    Point();
    Point (Point &obj);
    Point (float x0, float y0);
    void display_Point();
};