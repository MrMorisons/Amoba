#include "application.hpp"
#include "maistro.hpp"
#include "iustitia.hpp"
#include "star_menu.hpp"
#include "game_play.hpp"
#include "game_over.hpp"
#include "iostream"

application::application(int xx,int yy)
{
    kru = new iustitia(this);
    star_menu* start = new star_menu(this,kru,xx,yy);
    game_play* game = new game_play(this,kru,xx,yy,kru->get_mezoszam());
    game_over* over = new game_over(this,kru,xx,yy);
}

void application::run(){
    int i=0;
        while(true){
            cout<<i<<endl;
            game_parts[i]->set_selected(true);
            kru->set_game_part_number(i);
            kru->set_ures_mezo(game_parts[i]->ret_widgets());
            cout<<"hello"<<endl;
            game_parts[i]->event_loop();
            if(game_parts[i]->is_selected()==false){
                i++;
                if(i>=3){
                    i=0;
                }
            }
        }
}

void application::register_maistro(maistro* m){
    game_parts.push_back(m);
}
