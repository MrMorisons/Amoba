#include "iustitia.hpp"
#include "application.hpp"
#include "maistro.hpp"
#include "widget.hpp"

iustitia::iustitia(application* new_boss):boss(new_boss){

}

void iustitia::menaging(){
    if(game_part_number==0){

    }
    if(game_part_number==1){

    }
    if(game_part_number==2){

    }
}

void iustitia::set_active(){
    active=true;
}

bool iustitia::get_active(){
    return active;
}

vector<widget*> iustitia::get_ures_mezo(vector<widget*> help){
    ures_mezo=help;
}
