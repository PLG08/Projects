#include <iostream>

using namespace std;

int main()
{
    int n, i;
    long long s=0;
    cin >> n;
    for (i=0; i<=n; i++)
    {
        s=s+i;
    }

    cout << s << endl;
    return 0;
}
