#include <iostream>

using namespace std;

int main()
{
    int n ,x, p , v[26], i;
    cin>>n>>x>>p;
    for(i=1;i<=n;i++)
        cin>>v[i];

    n++;
    for(i=n;i>p;i--)
        v[i]=v[i-1];
    v[p]=x;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
