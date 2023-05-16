#include "graphics.hpp"
#include "widget.hpp"
#include "maistro.hpp"
#include "star_menu.hpp"

using namespace genv;

const int xx=800;
const int yy=800;

int main()
{
    gout.open(xx,yy);
    star_menu teszt(xx,yy);
    gout << refresh;
    teszt.event_loop();
    return 0;
}
