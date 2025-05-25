#include <iostream>

using namespace std;

int main()
{
    int n, k, c=0, i;
    cin >> n >> k;
    while (n!=1)
    {
        n=n/10;
        c++;
    }
    cout << 1;
    for (i=0; i<c*k; i++)
    {
        cout << 0;
    }

    return 0;
}
