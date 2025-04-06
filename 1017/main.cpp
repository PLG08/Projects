#include <iostream>

using namespace std;

int divimp(int v[], int st, int dr)
{
    if(st == dr)
    {
        if(v[st] % 2 == 0)
            return v[st];
        return 0;
    }

    int mij = (st + dr) / 2;
    return divimp(v, st, mij) + divimp(v, mij + 1, dr);

}

int main()
{
    int n, v[1001], i;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> v[i];
    cout << divimp(v, 0, n - 1) << endl;
}