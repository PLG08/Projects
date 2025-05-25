#include <iostream>

using namespace std;

int main()
{
    int n,i,nr,k,ok;
    cin>>n;
    k=0;
    ok=0;
    for (i=1; i<=n; i++){
        cin>>nr;
        do{
           if(nr%10==0){
            ok=1;
            nr=nr/10;
        }

    }while (nr!=0);
    if(ok==1)
        k++;
    }

    cout << k << endl;
    return 0;
}
