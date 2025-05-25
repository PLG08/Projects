#include <iostream>

using namespace std;

int main()
{
    int n,k,p,i,cx,x,uc;
    cin>>n;
    p=0;
    i=0;
    for(k=1;k<=n;k++){

            cin>>x;
           do{
            uc=x%10;
        if(uc%2==0)
            p++;
        else
            i++;
            x=x/10;
           }while(x);


    }
    cout<<p<<" "<<i;
    return 0;
}
