#include "funcs.h"

void create_offcuts(offcut &offcut1, offcut &offcut2, offcut &offcut3){
  Point start1 (0, 0), end1(start1);
  int quan = 0;

  cout<<"Create 3 offcuts (Entes the coordinates of the start and of the end)\n"<<endl;
  create_Point(start1, end1, quan);
  offcut1.set_st_en(start1, end1);
  offcut1.display_offcut();
  quan++;

  create_Point(start1, end1, quan);
  offcut2.set_st_en(start1, end1);
  offcut2.display_offcut();
  quan++;

  create_Point(start1, end1, quan);
  offcut3.set_st_en(start1, end1);
  offcut3.display_offcut();
  }



void create_Point(Point &start, Point &end, int quan){
  float x0, y0, x1, y1;
  bool flag;

  do{
   flag = true;
   cout<<"===Enter the coordinates of the start of the "<<quan + 1<<" offcut (x;y):\nEnter x:";
   cin>>x0;
   cout<<"Enter y:";
   cin>>y0;

   cout<<"===Enter the coordinates of the end of the "<<quan + 1<<" offcut (x;y):\nEnter x:";
   cin>>x1;
   cout<<"Enter y:";
   cin>>y1;
   if(x0 == x1 && y0 == y1){
    flag = !flag;
    cout<<"\nThe start is equal to the end\nPlease, try again:"<<endl;
  }
  }while(!flag);

  Point start1(x0, y0), end1(start1);
  end1.setx(x1);
  end1.sety(y1);

  start = start1;
  end = end1;
}


void display_offcuts(offcut &off1, offcut &off2, offcut &off3){
  cout<<"\n\n=======OFFCUTS======='\n"<<endl;
  off1.display_offcut();
  off2.display_offcut();
  off3.display_offcut();
}




void incr_and_fin_len(offcut &off){
  float LEN1 = off.find_len();
  cout<<"\n===before increasing the coordinates of the start==="<<endl;
  off.display_offcut();
  cout<<"\nLen = "<<LEN1<<endl;

  ++off;
  cout<<"\n===after increasing the coordinates of the start==="<<endl;
  off.display_offcut();
  LEN1 = off.find_len();
  cout<<"\nLen = "<<LEN1<<endl;
}


void check_paralel(offcut &offcut1, offcut &offcut2){
  offcut temp (offcut2);
  cout<<"\n\n\n\n=====Check paralel of the 1st and the 2nd offcuts=====\n"<<endl;
  if(offcut1 || temp) cout<<"\nOffcuts are paralel"<<endl;
  else cout<<"\nOffcuts aren`t paralel"<<endl;
}