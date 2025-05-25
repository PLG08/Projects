#include <iostream>

using namespace std;

int main()
{
    int n, i, nr, nr_max;
    cin >> n;
    cin >> nr_max;
    for(i=0; i<n-1; i++)
    {
        cin >> nr;
        if (nr_max < nr)
        {
            nr_max = nr;
        }
    }
    cout << nr_max << endl;
    return 0;
}
