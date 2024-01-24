#include <iostream>

using namespace std;

int main()
{
    long long n,zero,unu,uc;

    bool ok=1;
    zero=0;
    unu=0;
    cin>>n;

       while(n>0){
        uc=n%10;
        if(uc==1)
            unu++;
        else
            if(uc==0)
            zero++;
            else
                ok=0;

            n=n/10;
       }
       if(ok==1&&zero>=1&&unu>=1)
            cout<<"da";
        else
            cout<<"nu";


    return 0;
}
