#include "maistro.hpp"
#include "widget.hpp"
#include "mezo_X.hpp"
#include "mezo_O.hpp"
#include "iostream"

maistro::maistro(application *new_boss,iustitia *new_judge,int new_xx,int new_yy):boss(new_boss),judge(new_judge),xx(new_xx),yy(new_yy)
{
    boss->register_maistro(this);
   // judge->set_ures_mezo(widgets);
}

void maistro::event_loop(){
        event ev;
        int focus = -1;
        while(gin >> ev and selected) {
            if (ev.type == ev_mouse and ev.button==btn_left) {
                judge->menaging(&ev,widgets);
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

vector<widget*> maistro::ret_widgets(){
    return widgets;
}

void maistro::set_selected(bool k){
    selected=k;
}

void maistro::change_X(mezo_X *help,int k){
    widgets.erase(widgets.begin()+k);
    widgets.push_back(help);
}
void maistro::change_O(mezo_O* help,int k){
     widgets.erase(widgets.begin()+k);
    widgets.push_back(help);
}

bool maistro::is_selected(){
    return selected;
}

void maistro::register_widget(widget* w){
    widgets.push_back(w);
}



