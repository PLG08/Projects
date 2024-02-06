#include <iostream>

using namespace std;

int main()
{
    int n,v[501],i,j,ok;
    cin>>n; ok=1;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)

            if(v[i]>v[j])
            ok=0;

    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
