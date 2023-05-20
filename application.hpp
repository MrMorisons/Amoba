#ifndef APPLICATION_HPP
#define APPLICATION_HPP

class maistro;
#include <vector>
#include "graphics.hpp"

using namespace std;
using namespace genv;

class application{
protected:
    vector<maistro*> game_parts;
public:
    application(int,int);
    void run();
    void register_maistro(maistro*);
};

#endif // APPLICATION_HPP
