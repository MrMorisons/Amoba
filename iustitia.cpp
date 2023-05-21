#include "iustitia.hpp"
#include "application.hpp"
#include "maistro.hpp"
#include "widget.hpp"

iustitia::iustitia(application* new_boss):boss(new_boss){

}

void iustitia::set_active(){
    active=true;
}

bool iustitia::get_active(){
    return active;
}

vector<widget*> iustitia::get_ures_mezo(vector<widget*> help){
    ures_mezo=help;
}
