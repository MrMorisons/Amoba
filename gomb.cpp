#include "gomb.hpp"

gomb::gomb(maistro* new_boss,int new_x,int new_y,function<void()>new_f):widget(new_boss,new_x,new_y,10,10),f(new_f){
}

void gomb::paint(){
    if(!selected){
        gout<<color(200,200,100)<<move_to(x-size_x/2,y-size_y/2)<<box(size_x,size_y)<<color(255,255,255)<<move_to(x,y)<<text("Start");
    }
    else{
        gout<<color(100,100,100)<<move_to(x-size_x/2,y-size_y/2)<<box(size_x,size_y)<<color(255,255,255)<<move_to(x,y)<<color(255,0,0)<<text("Start");
    }
}

void gomb::overlord(event *ev){
    if(is_selected(ev)){
        f();
    }
    paint();
}
