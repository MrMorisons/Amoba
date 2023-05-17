#include "graphics.hpp"
#include "widget.hpp"
#include "maistro.hpp"
#include "star_menu.hpp"
#include "game_play.hpp"

using namespace genv;

const int xx=800;
const int yy=800;

int main()
{
    gout.open(xx,yy);
    game_play teszt(xx,yy,9);
    gout << refresh;
    teszt.event_loop();
    return 0;
}
