#include "widget.hpp"

widget::widget(maistro* new_boss,int new_x,int new_y,int new_size_x,int new_size_y,std::string new_name)
            :boss(new_boss),x(new_x),y(new_y),size_x(new_size_x),size_y(new_size_y),name(new_name){
    boss->register_widget(this);
}

bool widget::is_selected(event *ev){
      return (x-(size_x/2)<ev->pos_x and ev->pos_x<x+(size_x/2) and y-(size_y/2)<ev->pos_y and ev->pos_y<y+(size_y/2));
}

