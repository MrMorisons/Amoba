#ifndef GAME_OVER_HPP
#define GAME_OVER_HPP

#include "maistro.hpp"
#include "gomb.hpp"


struct game_over :maistro{
private:
    gomb *exit_gomb;
public:
    game_over(application*,int,int);
    bool action();
};

#endif // GAME_OVER_HPP
