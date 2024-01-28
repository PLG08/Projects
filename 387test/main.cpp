#include <iostream>

using namespace std;

int main()
{
    int n,di,i,d30;
    long long S=1;
    cin>>n;

    for(i=1; i<=n/2; i++)
    {


            if(n%i==0)
            {
                d30=n/i;
                if(d30%2!=0)
                {
                    di=d30;
                    S=S+di;
                }




            }


    }

    cout<<S;

    return 0;
}
