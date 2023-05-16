#ifndef GOMB_HPP
#define GOMB_HPP

#include "widget.hpp"

using namespace std;
using namespace genv;


class gomb :widget{
protected:
    bool selected;
    function<void()>f;
public:
    gomb(maistro*,int,int,int,int,string,function<void()>);
    void paint();
    void overlord(event*);
};


#endif // GOMB_HPP
