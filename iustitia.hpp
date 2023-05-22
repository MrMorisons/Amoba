#ifndef IUSTITIA_HPP
#define IUSTITIA_HPP

class application;
class maistro;
class widget;
#include <vector>
#include "graphics.hpp"

using namespace std;
using namespace genv;

class iustitia
{
    protected:
        application *boss;
        vector<maistro*> game_parts;
        //string *name_O,*name_X;
        vector<widget*> ures_mezo;
        vector<widget*> ures_O;
        vector<widget*> ures_X;
        int mezoszam=13,xx,yy,game_part_number;
        bool X_turn=false;
        //bool active=false;
        //event *ev;
    public:
        iustitia(application*);
        void set_ures_mezo(vector<widget*>);
        void set_game_part_number(int);
        //void set_active();
        //bool get_active();
        void set_mezoszam(int);
        int get_mezoszam();
        void menaging(event*,vector<widget*>);
};

#endif // IUSTITIA_HPP
