#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    int pc,nrintreg;
    cin>>a;
    nrintreg=a*100;
    pc=(nrintreg/10)%10;
    cout << pc << endl;
    return 0;
}
