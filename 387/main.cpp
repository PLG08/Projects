#include <iostream>

using namespace std;

int main()
{
    int n,d;
    long long s=0;
    cin>>n;

    for(d=1; d*d<n; d++)
    {
        if(n%d==0)
        {
            if(d%2==1)

                s=s+d;
            if((n/d)%2==1)
                s=s+(n/d);
            }

    }
    if(d*d==n)
        if(d%2==1)
        s=s+d;

    cout<<s;

    return 0;
}
