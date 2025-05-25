#include <iostream>

using namespace std;

int main()
{
    int n,d;
    cin>>n;

    if(n!=1)
    {
        long long S=0;
        for(d=1; d*d<=n; d++)
        {
            if(n%d==0)
            {
                S=S+d;
                S=S+(n/d);
            }
            if(d*d==n)
                S=S-d;
        }
        cout<<S;

    }
    else
        cout<<1;
    return 0;
}
