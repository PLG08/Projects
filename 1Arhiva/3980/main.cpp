#include <iostream>

using namespace std;

int main()
{
    int n, i, nr, val_min, val_max, s=1;
    cin >> n;
    cin >> val_max;
    for(i=1; i<n; i++)
    {
        cin >> nr;
        if (val_max > nr)
        {
            val_max = nr;
        }
        else
        {
            val_min = nr;
        }
        s = val_min + val_max;
    }

    cout << s << endl;
    return 0;
}
