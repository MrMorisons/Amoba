#ifndef MAISTRO_HPP
#define MAISTRO_HPP

class widget;
#include "application.hpp"
#include "iustitia.hpp"
#include "graphics.hpp"
#include <vector>

using namespace std;
using namespace genv;

class maistro{
protected:
    application *boss;
    iustitia *judge;
    int xx, yy;
    bool selected=false;
    vector<widget*> widgets;
public:
    maistro(application*,int,int);
    vector<widget*> ret_widgets();
    void event_loop();
    void register_widget(widget*);
    void set_selected(bool);
    bool is_selected();
    virtual bool action()=0;
};


#endif // MAISTRO_HPP
