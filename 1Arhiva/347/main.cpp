#include <iostream>

using namespace std;

int main()
{
    int n, nr_max, nr, i, nr_min;
    cin >> n;
    cin >> nr_min;
    nr_max = nr_min;

    for (i=1; i<n; i++)
    {
        cin >> nr;
        if(nr < nr_min)
        {
            nr_min = nr;
        }
        if (nr > nr_max)
        {
            nr_max = nr;
        }
    }

    cout << nr_min + nr_max << endl;
    return 0;

}
