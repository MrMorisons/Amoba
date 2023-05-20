#include "game_play.hpp"

game_play::game_play(application* new_boss,int new_xx,int new_yy,int new_mezoszam):maistro(new_boss,new_xx,new_yy),mezoszam(new_mezoszam){
    for(int i=0;i<mezoszam;i++){
        for(int j=0;j<mezoszam;j++){
            mezo * seged = new mezo(this,(szegej)+i*(xx-szegej*2)/mezoszam,(szegej)+j*(yy-szegej*2)/mezoszam,(xx-szegej*2)/mezoszam,(yy-szegej*2)/mezoszam,"ures mezo");
            seged= NULL;
            delete seged;
         }
    }
}

bool game_play::action(){
    selected=false;
}
