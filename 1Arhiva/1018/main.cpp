#include <iostream>

using namespace std;

int divimp(int v[], int st, int dr)
{
    int cntimpare = 0, sol1, sol2;
    if(st == dr)
    {
        if(v[st] % 2 != 0)
            {
                cntimpare ++;
                return cntimpare;
            }
            return 0;
    }




    int mij = (st + dr) / 2;

    sol1 = divimp(v, st, mij);
    sol2 = divimp(v, mij + 1, dr);

    return sol1 + sol2;









}

int main()
{
   int n, i, v[1001];
   cin >> n;
   for(i = 0; i < n; i++)
        cin >> v[i];
   cout << divimp(v, 0, n - 1);

    return 0;
}
