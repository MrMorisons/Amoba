#include "graphics.hpp"
#include "application.hpp"



using namespace genv;

const int xx=800;
const int yy=800;

int main()
{
    gout.open(xx,yy);
    application teszt(xx,yy);
    gout << refresh;
    teszt.run();
    return 0;
}
