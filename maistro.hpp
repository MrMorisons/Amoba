#ifndef MAISTRO_HPP
#define MAISTRO_HPP

class widget;
#include "graphics.hpp"
#include <vector>

using namespace std;
using namespace genv;

class maistro{
protected:
    vector<widget*> widgets;
public:
    maistro();
    void event_loop();
    void register_widget(widget*);
    virtual void action(string)=0;
};


#endif // MAISTRO_HPP
