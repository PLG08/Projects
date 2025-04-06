#include <iostream>

using namespace std;

int divimp(int v[], int st, int dr)
{
    if(st == dr)
    {
        return v[st] % 2;
    }

    int mij = (st + dr) / 2;
    return divimp(v, st, mij) || divimp(v, mij + 1, dr);
    
}


int main()
{
    int n, v[101];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> v[i];

    if(divimp(v, 0, n-1))
        cout << "DA" << endl;
    else
        cout << "NU" << endl;
    
    
    return 0;
}
