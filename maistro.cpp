#include "maistro.hpp"
#include "widget.hpp"


maistro::maistro(int new_xx,int new_yy):xx(new_xx),yy(new_yy)
{

}

void maistro::event_loop(){
        event ev;
        int focus = -1;
        while(gin >> ev ) {
            if (ev.type == ev_mouse && ev.button==btn_left) {
                for (size_t i=0;i<widgets.size();i++) {
                    if (widgets[i]->is_selected(&ev)) {
                            focus = i;
                    }
                }
            }
            /*if(ev.type == ev_key and ev.keycode==key_enter){
                action("Enter");
            }
            if(ev.type == ev_key and ev.keycode==key_space){
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

void maistro::register_widget(widget* w){
    widgets.push_back(w);
}



