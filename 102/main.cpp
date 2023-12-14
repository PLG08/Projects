#include <iostream>

using namespace std;

int main()
{
    int n,cz,cu,s;
    cin>>n;
    n>=10;
    cu=n%10;
    cz=(n/10)%10;
    s=cz+cu;
    cout << s << endl;
    return 0;
}
