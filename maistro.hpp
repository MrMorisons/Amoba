#ifndef MAISTRO_HPP
#define MAISTRO_HPP

class widget;
#include "graphics.hpp"
#include <vector>

using namespace std;
using namespace genv;

class maistro{
protected:
    int xx, yy;
    vector<widget*> widgets;
public:
    maistro(int,int);
    void event_loop();
    void register_widget(widget*);
    virtual void action()=0;
};


#endif // MAISTRO_HPP
