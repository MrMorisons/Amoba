#include "widget.hpp"
#include "iostream"

widget::widget(maistro* new_boss,int new_x,int new_y,int new_size_x,int new_size_y,std::string new_name)
            :boss(new_boss),x(new_x),y(new_y),size_x(new_size_x),size_y(new_size_y),name(new_name){
    boss->register_widget(this);
}

bool widget::is_selected(event *ev){
      return (x<ev->pos_x and ev->pos_x<x+size_x and y<ev->pos_y and ev->pos_y<y+size_y);
}

int widget::get_x(){
    return x;
}
int widget::get_y(){
    return y;
}
int widget::get_size_x(){
    return size_x;
}
int widget::get_size_y(){
    return size_y;
}

