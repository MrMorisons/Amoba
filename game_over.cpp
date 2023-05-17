#include "game_over.hpp"

game_over::game_over(int new_xx,int new_yy):maistro(new_xx,new_yy){
    exit_gomb = new gomb(this,xx/2,yy/2,gout.twidth("Exit")+10,gout.cascent(),"Exit",[this](){});
}


void game_over::action(){
    "";
}
