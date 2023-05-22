#ifndef MEZO_X_HPP
#define MEZO_X_HPP

#include "mezo.hpp"


struct mezo_X:widget
{
public:
    mezo_X(maistro*,widget*);
    void paint();
    void overlord(event*);
};

#endif // MEZO_X_HPP
