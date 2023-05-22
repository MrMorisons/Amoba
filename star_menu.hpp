#ifndef STAR_MENU_HPP
#define STAR_MENU_HPP

#include "maistro.hpp"
#include "gomb.hpp"
#include "szambealito.hpp"

struct star_menu:maistro{
private:
    gomb *start_gomb;
    szambealito *mezoszam;
public:
    star_menu(application*,iustitia*,int,int);
    int get_number();
    bool action();
    void set_number(int);
};

#endif // STAR_MENU_HPP
