#include <iostream>

using namespace std;

int main()
{
    int n, i, s=0;
    cin >> n;
    for(i=0; i<=n; i++)
    {
        s=s+i*2;
    }



    cout << "Suma este " << s;
    return 0;
}
