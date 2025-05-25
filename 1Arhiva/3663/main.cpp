#include <iostream>

using namespace std;

int main()
{
   int n,nr,d;
   cin>>n;
   nr=0;
   d=1;
   while(d<=n){
    if(n%d==0 && d>1){
        nr=d;
        break;
    } d++;
   }cout<< nr*nr;

    return 0;
}
