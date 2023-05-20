#include "application.hpp"
#include "maistro.hpp"
#include "star_menu.hpp"
#include "game_play.hpp"
#include "game_over.hpp"
#include "iostream"

application::application(int xx,int yy)
{
    star_menu* start = new star_menu(this,xx,yy);
    game_play* game = new game_play(this,xx,yy,13);
    game_over* over = new game_over(this,xx,yy);
}

void application::run(){
    int i=2;
        while(true){
            cout<<i<<endl;
            game_parts[i]->set_selected(true);
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
