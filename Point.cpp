#include "Point.h"


void Point::setx(float x0){
  x = x0;
}


void Point::sety(float y0){
  y = y0;
}


Point::Point (float x0, float y0){
    x = x0;
    y = y0;
}


Point::Point (Point &obj){
    x = obj.x;
    y = obj.y;
}

Point::Point(){
  x = 0; y = 0;
}


void Point::display_Point(){
    cout<<"X = "<<x<<" ; Y = "<<y<<endl;
}



float Point::getx(){
    return x;
}

float Point::gety(){
    return y;
}