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
    string write;
public:
    widget(maistro*,int,int,int,int);
    string get_write(){
        return write;
    }
    string set_write(string set_write){
        write=set_write;
    }
    bool is_selected(event*);
    virtual void paint()=0;
    virtual void overlord(event*)=0;
};

#endif // WIDGET_HPP
