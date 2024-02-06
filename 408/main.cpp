#include <iostream>

using namespace std;

int main()
{
    int n,d,D,ogl;
    cin>>n;
    ogl=0;
    D=0;
    while(n)
    {
        ogl=10*ogl+n%10;
        n=n/10;
    }
    for(int d=1; d*d<ogl; d++)
        if(ogl%d==0)
        {
            D=D+2;
        }
    if(d*d==ogl)
    {
        D++;
    }
    cout<<D;

    return 0;
}
