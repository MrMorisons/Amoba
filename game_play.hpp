#ifndef GAME_PLAY_HPP
#define GAME_PLAY_HPP

#include "maistro.hpp"
#include "mezo.hpp"


struct game_play :maistro{
protected:
    int mezoszam;
    int szegej=60;
public:
    game_play(int,int,int);
    void action();
};

#endif // GAME_PLAY_HPP
