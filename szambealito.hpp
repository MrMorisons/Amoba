#ifndef SZAMBEALITO_HPP
#define SZAMBEALITO_HPP

#include "widget.hpp"


#include "gomb.hpp"

using namespace std;
using namespace genv;

struct szambealito:widget{
protected:
    int number=15;
    int minimum,maximum;
public:
    gomb up;
    gomb down;
    szambealito(maistro*,int,int,int,int);
    bool set_selected(event*);
    void set_number(event*);
    void add();
    void subtract();
    int ret_x();
    int ret_y();
    int ret_size_x();
    int ret_size_y();
    int ret_number();
    void paint();
    void overlord(event*);
};


#endif // SZAMBEALITO_HPP
