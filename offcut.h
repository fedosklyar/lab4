#include "Point.h"


using namespace std;


class offcut{
    Point start;
    Point end;
    public:
    void set_st_en(Point s, Point e);
    void set_start(Point p);
    void set_end(Point p);
    offcut();
    offcut (offcut &obj);
    void display_offcut();
    float find_len();
    void operator++();
    bool operator||(offcut obj);
};
