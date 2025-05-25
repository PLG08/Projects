#include <iostream>

using namespace std;

int main()
{
    long long n,maxi;
    cin>>n;
    maxi=10;

    if (n==0){
        maxi=0;
    }
    while (n!=0){
        if (n%2==0)
           maxi=n%10;
            n=n/10;


    }
    cout<<maxi<<endl;



    return 0;
}
