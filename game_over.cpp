#include "game_over.hpp"

game_over::game_over(application *new_boss,iustitia *new_judge,int new_xx,int new_yy):maistro(new_boss,new_judge,new_xx,new_yy){
    exit_gomb = new gomb(this,xx/2,yy/2,gout.twidth("Exit")+10,gout.cascent(),"Exit",[this](){this->set_selected(false);});
}


bool game_over::action(){
    selected=false;
}

int game_over::get_number(){

}

void game_over::set_number(int){

}
