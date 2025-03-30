#include <iostream>

using namespace std;

int cifmax(int n)
{
    if (n < 10)
    {
        return n;
    }

    int maxi = cifmax(n / 10); 
    if(n % 10 > maxi)
        return n % 10;
    else
        return maxi;
    
}



int main()
{
    int n;
    cin >> n;
    cout << cifmax(n) << endl;
    return 0;
}
