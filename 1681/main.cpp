#include <iostream>

using namespace std;

int main()
{
    int a,b,p=1,i;
    cin >> a >> b;
    for (i=0; i<b; i++)
    {
        p=p*a;
    }


    cout << p << endl;
    return 0;
}
