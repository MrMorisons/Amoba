#ifndef MEZO_O_HPP
#define MEZO_O_HPP

#include "widget.hpp"


struct mezo_O :widget
{
public:
    mezo_O(maistro*,widget*);
    void paint();
    void overlord(event*);
};

#endif // MEZO_O_HPP
