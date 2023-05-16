#ifndef STAR_MENU_HPP
#define STAR_MENU_HPP

#include "maistro.hpp"
#include "gomb.hpp"

struct star_menu:maistro{
private:
    gomb *start_gomb;
public:
    star_menu(int,int);
    void action();
};

#endif // STAR_MENU_HPP
