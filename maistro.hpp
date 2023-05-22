#ifndef MAISTRO_HPP
#define MAISTRO_HPP

class widget;
class mezo_O;
class mezo_X;
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
    maistro(application*,iustitia*,int,int);
    vector<widget*> ret_widgets();
    void event_loop();
    void register_widget(widget*);
    void set_selected(bool);
    void change_X(mezo_X*,int);
    void change_O(mezo_O*,int);
    bool is_selected();
    virtual void set_number(int)=0;
    virtual int get_number()=0;
    virtual bool action()=0;
};


#endif // MAISTRO_HPP
