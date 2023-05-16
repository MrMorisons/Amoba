#include "mezo.hpp"

mezo::mezo(maistro* new_boss,int new_x, int new_y, int new_sx, int new_sy)
    : widget(new_boss,new_x,new_y,new_sx,new_sy)
{
    _checked=false;
}

void mezo::paint()
{
    gout << move_to(x, y) << color(255,255,255) << box(size_x, size_y);
    gout << move_to(x+2, y+2) << color(0,0,0) << box(size_x-4, size_y-4);
    if (_checked) {
        gout << color(255,255,255);
        gout << move_to(x+4, y+4) << line(size_x-8, size_y-8);
        gout << move_to(x+5, y+4) << line(size_x-8, size_y-8);
        gout << move_to(x+size_x-4, y+4) << line(-size_x+8, size_y-8);
        gout << move_to(x+size_x-5, y+4) << line(-size_x+8, size_y-8);
    }
}

void mezo::overlord(event *ev)
{
    /*if (ev.type == ev_key && (ev.keycode == key_enter or ev.keycode == key_space)) {
            _checked = !_checked;
    }*/
    if (ev->type == ev_mouse && is_selected(ev) && ev->button==btn_left) {
        _checked = !_checked;
    }
}
bool mezo::is_checked()
{
    return _checked;
}
