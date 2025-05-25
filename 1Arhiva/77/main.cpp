#include <iostream>

using namespace std;

int main()
{
    long long n, uc, cn;
    cin>>n;
    cn=n;
    uc=cn%10;
    while (cn!=0)
      if (uc%2==0)
        cout<<uc<<endl;
    else
        if (uc%2!=0)
            cn=cn/10;






    return 0;
}
