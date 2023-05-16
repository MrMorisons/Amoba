#include "gomb.hpp"

gomb::gomb(maistro* new_boss,int new_x,int new_y,int new_size_x,int new_size_y,std::string new_name,function<void()>new_f)
    :widget(new_boss,new_x,new_y,new_size_x,new_size_y,new_name),f(new_f){
    selected=false;
}

void gomb::paint(){
    if(!selected){
        gout<<color(200,200,100)<<move_to(x-size_x/2,y-size_y/2)<<box(size_x,size_y)<<color(255,255,255)<<move_to(x-gout.twidth(name)/2,y+gout.cascent()/2)<<text(name);
    }
    else{
        gout<<color(100,100,100)<<move_to(x-size_x/2,y-size_y/2)<<box(size_x,size_y)<<color(255,255,255)<<move_to(x-gout.twidth(name)/2,y+gout.cascent()/2)<<color(255,0,0)<<text(name);
    }
}

void gomb::overlord(event *ev){
    if(is_selected(ev)){
        selected=true;
        f();
    }
    else{
        selected=false;
    }
}
