#include "iustitia.hpp"
#include "application.hpp"
#include "maistro.hpp"
#include "widget.hpp"
#include "mezo.hpp"
#include "mezo_O.hpp"
#include "mezo_X.hpp"
#include "iostream"

iustitia::iustitia(application* new_boss):boss(new_boss){

}

void iustitia::menaging(event *ev,vector<widget*> help){

    if(game_part_number==0){
        set_mezoszam(game_parts[game_part_number]->get_number());
    }
    if(game_part_number==1){
        game_parts[game_part_number]->set_number(mezoszam);
        for(int i=0;i<help.size();i++){
            if(help[i]->is_checked() and X_turn){
                mezo_X *new_X = new mezo_X(game_parts[game_part_number],help[i]);
                ures_X.push_back(new_X);
                game_parts[game_part_number]->change_X(new_X,i);
                X_turn=false;
                cout<<"boi"<<endl;
            }
            if(help[i]->is_checked() and !X_turn){
                mezo_O* new_O = new mezo_O(game_parts[game_part_number],help[i]);
                ures_O.push_back(new_O);
                game_parts[game_part_number]->change_O(new_O,i);
                X_turn=true;
                cout<<"girl"<<endl;
            }
        }
    }
}

void iustitia::set_game_part_number(int help){
    game_part_number = help;
}

/*void iustitia::set_active(){
    active=true;
}

bool iustitia::get_active(){
    return active;
}*/

void iustitia::set_mezoszam(int help){
    mezoszam = help;
}

int iustitia::get_mezoszam(){
    return mezoszam;
}


void iustitia::set_ures_mezo(vector<widget*> help){
    ures_mezo=help;
}
