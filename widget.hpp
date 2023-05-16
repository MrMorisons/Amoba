#ifndef WIDGET_HPP
#define WIDGET_HPP

#include "maistro.hpp"
#include "graphics.hpp"
#include "vector"
#include "functional"
#include <cmath>
#include <math.h>

using namespace std;
using namespace genv;

class widget{
protected:
    maistro* boss;
    int x,y,size_x,size_y;
    bool selected,selected_move;
    string name;
public:
    widget(maistro*,int,int,int,int,string);
    string get_name(){
        return name;
    }
    void set_name(string set_write){
        name=set_write;
    }
    bool is_selected(event*);
    virtual void paint()=0;
    virtual void overlord(event*)=0;
};

#endif // WIDGET_HPP
