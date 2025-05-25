#include <iostream>

using namespace std;

int main()
{
    int n, i;
    long long p=1;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        p=i*p;
    }
    cout << p << endl;
    return 0;
}
