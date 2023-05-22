#ifndef MEZO_HPP
#define MEZO_HPP

#include "widget.hpp"


class mezo : public widget
{
protected:
    bool _checked;
public:
    mezo(maistro*,int x, int y, int sx, int sy,std::string);
    virtual void paint() ;
    virtual void overlord(genv::event *ev);
    bool is_checked();
};


#endif // MEZO_HPP
