#ifndef GAME_PLAY_HPP
#define GAME_PLAY_HPP

#include "maistro.hpp"
#include "mezo.hpp"
#include "mezo_X.hpp"


struct game_play :maistro{
protected:
    int mezoszam;
    int szegej=60;
public:
    game_play(application*,iustitia*,int,int,int);
    bool action();
    int get_number();
    void set_number(int);
};

#endif // GAME_PLAY_HPP
