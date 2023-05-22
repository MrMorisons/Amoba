#include "graphics.hpp"
#include "application.hpp"
#include "iostream"



using namespace genv;

const int xx=800;
const int yy=800;

int main()
{
    gout.open(xx,yy);
    application teszt(xx,yy);
    cout<<"hello"<<endl;
    gout << refresh;
    teszt.run();
    return 0;
}
