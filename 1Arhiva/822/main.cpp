#include <iostream>

using namespace std;

int nr_cif_zero(int n)
{
    if(n == 0)
        return 1;


    if(n % 10 == 0)
        return 1 + nr_cif_zero(n / 10);
    else
    {
        if (n >= 10)
            return nr_cif_zero(n / 10);
        else
            return 0;
    }
}


int main()
{
    cout << nr_cif_zero(2050) << endl;
    return 0;
}
