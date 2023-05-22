#include "star_menu.hpp"
#include "iostream"

star_menu::star_menu(application *new_boss,iustitia *new_judge,int new_xx,int new_yy):maistro(new_boss,new_judge,new_xx,new_yy){
    start_gomb = new gomb(this,xx/2,yy/2,gout.twidth("Start")+10,gout.cascent()+30,"Start",[this](){this->set_selected(false);});
    mezoszam = new szambealito(this,xx/2,yy*2/3,15,30);
}

int star_menu::get_number(){
    return mezoszam->ret_number();
}

bool star_menu::action(){
    selected=true;
}

void star_menu::set_number(int){

}
