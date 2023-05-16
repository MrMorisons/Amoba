#include "star_menu.hpp"

star_menu::star_menu(int new_xx,int new_yy):maistro(new_xx,new_yy){
    start_gomb = new gomb(this,xx/2,yy/2,gout.twidth("Start")+10,gout.cascent(),"Start",[this](){});
}


void star_menu::action(){
    "";
}
