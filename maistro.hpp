#ifndef MAISTRO_HPP
#define MAISTRO_HPP

class widget;
#include "application.hpp"
#include "graphics.hpp"
#include <vector>

using namespace std;
using namespace genv;

class maistro{
protected:
    application *boss;
    int xx, yy;
    bool selected=false;
    vector<widget*> widgets;
public:
    maistro(application*,int,int);
    void event_loop();
    void register_widget(widget*);
    void set_selected(bool);
    bool is_selected();
    virtual bool action()=0;
};


#endif // MAISTRO_HPP
