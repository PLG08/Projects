#include <iostream>

using namespace std;

void citire(int n, int v[])
{
    if(n == 0) return;
    citire(n - 1, v);
    cin >> v[n - 1];
}

void afisare(int n, int v[])
{
    if(n == 0) return;
    afisare(n - 1, v);
    cout << v[n - 1] << " ";
    
}

void interclasare(int st, int dr, int v[])
{
    int c[1001], mij = (st + dr) / 2;
    int i = st, j = mij + 1, k = 0;
    // st[12, 14, 17]mij   mij+1[11, 18, 25]dr
    // c: 0[11, 12, 14, 17, 18, 25]k-1
    // v: st[.. .. .. .. .. ..]dr
    while(i <= mij && j <= dr)
    {
        if(v[i] < v[j])
        {
            c[k++] = v[i++];
        }
        else if(v[i] > v[j])
        {
            c[k++] = v[j++];
        }
        else
        {
            c[k++] = v[i++];
            c[k++] = v[j++];
        }
    }
    while(i <= mij)
    {
        c[k++] = v[i++];
    }
    while(j <= dr)
    {
        c[k++] = v[j++];
    }
    for(i = 0; i < k; i++)
    {
        v[st + i] = c[i];
    }

}

void divimp(int st, int dr, int v[])
{
    if(st == dr) return;

    int mij = (st + dr) / 2;
    divimp(st, mij, v);
    divimp(mij + 1, dr, v);
    interclasare(st, dr, v);
}



int main()
{
    int v[1001], n;
    cin >> n; 
    citire(n, v);
    divimp(0, n - 1, v);
    afisare(n, v);
}