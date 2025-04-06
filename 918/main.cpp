#include <iostream>

using namespace std;

void sumcif(int n, int &s)
{
    if(n == 0)
    {
        s = 0;
        return;
    }
    sumcif(n / 10, s);
    s += n%10;
}


int main()
{
    int s;
    sumcif(346, s);
    cout << s << endl;
    return 0;
}
