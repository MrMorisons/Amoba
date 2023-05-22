#include "mezo_X.hpp"

mezo_X::mezo_X(maistro* new_boss,widget *original): widget(new_boss,original->get_x(),original->get_y(),original->get_size_x(),original->get_size_y(),original->get_name())
{

}

void mezo_X::paint(){
    gout << move_to(x, y) << color(255,255,255) << box(size_x, size_y);
    gout << move_to(x+2, y+2) << color(0,0,0) << box(size_x-4, size_y-4);
        gout << color(255,0,0);
        gout << move_to(x+4, y+4) << line(size_x-8, size_y-8);
        gout << move_to(x+5, y+4) << line(size_x-8, size_y-8);
        gout << move_to(x+size_x-4, y+4) << line(-size_x+8, size_y-8);
        gout << move_to(x+size_x-5, y+4) << line(-size_x+8, size_y-8);
}

void mezo_X::overlord(event* ev){
    paint();
}
