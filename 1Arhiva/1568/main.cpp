#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0,d;
    long long sdiv=0;
    float s;
    cin>>n;
    for(d=1; d*d<=n; d++)
        if(n%d==0){
            cnt++;
            sdiv=sdiv+d;
            if(d*d!=n)
                sdiv=sdiv+(n/d);
            cnt++;
        }
    s=sdiv/cnt;
    cout<<s;

    return 0;
}
