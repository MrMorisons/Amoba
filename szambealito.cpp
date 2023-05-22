#include "szambealito.hpp"


szambealito::szambealito(maistro* new_boss,int new_x, int new_y, int new_minimum, int new_maximum):widget(new_boss,new_x,new_y,60,30,"nev"),minimum(new_minimum),maximum(new_maximum),
up(boss,x+size_x/2+8,y-size_y/2+5,20,20,"sdfs",[this](){add();}),
down(boss,x+size_x/2+8,y+size_y/2-5,20,20,"sfds",[this](){subtract();})
{
}

bool szambealito::set_selected(event *ev){
    if(ev->pos_x<x+size_x/2 and ev->pos_x>x-size_x/2 and ev->pos_y<y+size_y/2 and ev->pos_y>y-size_y/2 and ev->button==btn_left){
        selected=true;
    }
    else if((ev->pos_x>x+size_x/2 or ev->pos_x<x-size_x/2 or ev->pos_y>y+size_y/2 or ev->pos_y<y-size_y/2) and ev->button==btn_left){
        selected=false;
    }
}


void szambealito::set_number(event *ev){
    if(selected and ev->button == btn_wheelup){
            if(number<maximum){
                number++;
            }
    }

    if(selected and ev->button == btn_wheeldown){
            if(number>minimum){
                number--;
            }
    }
}

void szambealito::add(){
    if(number<maximum){
        number++;
            }
}

void szambealito::subtract(){
    if(number>minimum){
                number--;
            }
}

int szambealito::ret_x(){
    return size_x;
}

int szambealito::ret_y(){
    return size_y;
}

int szambealito::ret_size_x(){
    return size_x;
}

int szambealito::ret_size_y(){
    return size_y;
}

int szambealito::ret_number(){
    return number;
}

void szambealito::paint(){
    if(!selected){
        gout<<color(200,200,100)<<move_to(x-size_x/2,y-size_y/2)<<box(size_x,size_y)<<color(255,255,255)<<move_to(x,y)<<text(to_string(number));
    }
    else{
        gout<<color(100,100,100)<<move_to(x-size_x/2,y-size_y/2)<<box(size_x,size_y)<<color(255,255,255)<<move_to(x,y)<<text(to_string(number));
    }
}

void szambealito::overlord(event *ev){
    //gomb up(x+size_x/2+8,y-size_y/2+5);
    //gomb down(x+size_x/2+8,y+size_y/2-5);
    set_selected(ev);
    set_number(ev);
    up.overlord(ev);
    down.overlord(ev);
    paint();
}
