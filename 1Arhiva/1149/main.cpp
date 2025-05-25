#include <iostream>

using namespace std;


int is_prim(int n)
{
    if(n == 1)
    {
        return 0;
    }
    
    for(long i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}


int exista_prime(int v[], int st, int dr)
{
    if(dr == st)
    {
        return is_prim(v[dr]);
    }
    int m = (st + dr) / 2;
    if (exista_prime(v, st, m))
    {
        return 1;
    }
    if (exista_prime(v, m + 1, dr))
    {
        return 1;
    }
    return 0;
    
    
}


int main()
{
    int i, n, v[201];
    cin >> n;
    for(i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    if(exista_prime(v, 0, n-1))
    {
        cout << "DA" << endl;
    }
    else
        cout << "NU" << endl;

    return 0;
}
