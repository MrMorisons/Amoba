#ifndef STAR_MENU_HPP
#define STAR_MENU_HPP

#include "maistro.hpp"
#include "gomb.hpp"

struct star_menu:maistro{
private:
    gomb *start_gomb;
public:
    star_menu(application*,int,int);
    bool action();
};

#endif // STAR_MENU_HPP
