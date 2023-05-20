#include "star_menu.hpp"
#include "iostream"

star_menu::star_menu(application *new_boss,int new_xx,int new_yy):maistro(new_boss,new_xx,new_yy){
    start_gomb = new gomb(this,xx/2,yy/2,gout.twidth("Start")+10,gout.cascent()+30,"Start",[this](){this->set_selected(false);});
}


bool star_menu::action(){
    selected=true;
}
