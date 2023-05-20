#include "maistro.hpp"
#include "widget.hpp"
#include "iostream"

maistro::maistro(application *new_boss,int new_xx,int new_yy):boss(new_boss),xx(new_xx),yy(new_yy)
{
    boss->register_maistro(this);
}

void maistro::event_loop(){
        event ev;
        int focus = -1;
        while(gin >> ev and selected) {
            if (ev.type == ev_mouse and ev.button==btn_left) {
                for (size_t i=0;i<widgets.size();i++) {
                    if (widgets[i]->is_selected(&ev)) {
                            focus = i;
                    }
                }
            }
            /*if(ev.type == ev_key and ev.keycode==key_space){
                action("Space");
            }*/
            if (focus!=-1) {
                widgets[focus]->overlord(&ev);
            }
            for (widget * w : widgets) {
                w->paint();
            }
            gout << refresh;
        }
}

void maistro::set_selected(bool k){
    selected=k;
}

bool maistro::is_selected(){
    return selected;
}

void maistro::register_widget(widget* w){
    widgets.push_back(w);
}



