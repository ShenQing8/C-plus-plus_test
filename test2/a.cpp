#include <iostream>
using namespace std;

struct Back
{
    bool background[4][4];
};
struct Frount
{
    Back frount[7][4];

    
};



int main()
{
    Frount abc = Frount();
    abc.frount[0][0].background[0][0] = true;

    return 0;
}
