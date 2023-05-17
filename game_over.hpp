#ifndef GAME_OVER_HPP
#define GAME_OVER_HPP

#include "maistro.hpp"
#include "gomb.hpp"


struct game_over :maistro{
private:
    gomb *exit_gomb;
public:
    game_over(int,int);
    void action();
};

#endif // GAME_OVER_HPP
