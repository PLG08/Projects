#include <iostream>

using namespace std;

int is_prim(int n)
{
    if(n == 1)
        return 0;
    for(long i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int divimp (int v[], int st, int dr)
{
     int sol1, sol2;

    if(st == dr)
    {
        if(is_prim(v[st]))
        {
            return v[st];
        }
        return 0;

    }
    int mij = (st + dr) / 2;

    sol1 = divimp(v, st, mij);
    sol2 = divimp(v, mij + 1, dr);

    if(sol1 > sol2)
        return sol1;
    else
        return sol2;
}

int main()
{
    int n, v[1001], i;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> v[i];
    cout << divimp(v, 0, n - 1);

    return 0;
}
