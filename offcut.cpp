#include "offcut.h"

offcut::offcut(){
    start.setx(0);
    start.sety(0);
    end.setx(0);
    end.sety(0); 
}


offcut::offcut(offcut &obj){
  start = obj.start;
  end = obj.end;
}

void offcut::set_st_en(Point s, Point e){ 
    this->start=s ; this->end=e;
    }

void offcut::set_start(Point p){
  this->start.setx(p.getx());
  this->start.sety(p.gety());
}


void offcut::set_end(Point p){
  this->end.setx(p.getx());
  this->end.sety(p.gety());
}



void offcut::display_offcut(){
  cout<<"Start --> ("<<start.getx()<<";"<<start.gety()<<")     End --> ("<<end.getx()<<";"<<end.gety()<<")"<<endl;
}



float offcut::find_len(){
  return sqrt(pow((start.getx() - end.getx()), 2) + pow((start.gety() - end.gety()), 2));
}

void offcut::operator++(){
  start.setx(start.getx() + 1);
  start.sety(start.gety() + 1);
}

bool offcut::operator||(offcut obj){
  float vec1_x = end.getx() - start.getx();
  float vec1_y = end.gety() - start.gety();
  float vec2_x = obj.end.getx() - obj.start.getx();
  float vec2_y = obj.end.gety() - obj.start.gety();
  cout<<"Vec1 - ("<<vec1_x<<";"<<vec1_y<<")"<<endl;
  cout<<"Vec2 - ("<<vec2_x<<";"<<vec2_y<<")"<<endl;
  if(vec2_x != 0 && vec1_x != 0 && vec1_y != 0 && vec2_y != 0 && (vec1_x/vec2_x ==  vec1_y/vec2_y)) return true;
  else return false;
}

