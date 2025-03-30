#include <iostream>

using namespace std;

int CifEgaleRec(int n, int k)
{
    if (n % 10 != k)
    {
        return 0;
    }
    else
    {
        if (n < 10)
            return 1;
        return CifEgaleRec(n / 10, k);
    }
}



int main()
{
    int n, k;
    cin >> n >> k;
    cout << CifEgaleRec(n, k) << endl;
    return 0;
}
