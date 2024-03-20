#include <iostream>

using namespace std;

int main()
{
    int i,n,p,v[1501];
    cin>>n>>p;

    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=p+1;i<=n;i++)
        v[i-1]=v[i];

        n--;

    for(i=1;i<=n;i++)
    cout<<v[i]<< " ";



    return 0;
}
