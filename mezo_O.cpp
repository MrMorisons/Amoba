#include "mezo_O.hpp"

mezo_O::mezo_O(maistro* new_boss,widget *original): widget(new_boss,original->get_x(),original->get_y(),original->get_size_x(),original->get_size_y(),original->get_name()){

}

void mezo_O::paint(){
    gout << move_to(x, y) << color(255,255,255) << box(size_x, size_y);
    gout << move_to(x+2, y+2) << color(0,0,0) << box(size_x-4, size_y-4);
        gout << color(0,0,255);
        for(int i=0;i<size_x-8;i++){
            for(int j=0;i<size_y-8;j++){
                if(pow(i,2)+pow(j,2)==pow(((size_x-8)/2),2)){
                    gout<<move_to(i,j)<<dot;
                }
            }
        }
}

void mezo_O::overlord(event* ev){
    paint();
}
