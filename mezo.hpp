#ifndef MEZO_HPP
#define MEZO_HPP

#include "widget.hpp"


class mezo : public widget
{
protected:
    bool _checked;
public:
    mezo(maistro*,int x, int y, int sx, int sy);
    virtual void paint() ;
    virtual void overlord(genv::event *ev);
    virtual bool is_checked() ;
};


#endif // MEZO_HPP
