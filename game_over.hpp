#ifndef GAME_OVER_HPP
#define GAME_OVER_HPP

#include "maistro.hpp"
#include "gomb.hpp"


struct game_over :maistro{
private:
    gomb *exit_gomb;
public:
    game_over(application*,iustitia*,int,int);
    bool action();
    int get_number();
    void set_number(int);
};

#endif // GAME_OVER_HPP
