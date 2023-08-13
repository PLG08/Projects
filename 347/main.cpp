#include <iostream>

using namespace std;

int main()
{
    int n, s=0, nr_max, nr, i, nr_min;
    cin >> n;
    cin >> nr_max;
    for (i=1; i<n; i++)
    {
        cin >> nr;
        if (nr < nr_max)
        {
            nr = nr_min;
        }
        else
        {
            nr = nr_max;
        }

        s = nr_min + nr_max;
    }

    cout << s << endl;
    return 0;

}
