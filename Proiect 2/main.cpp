#include <iostream>

using namespace std;

int main()
{
    int a=1, contor=0;
    while (a!=0)
    {
        cin >> a;
        if (a%2==0&&a!=0)
        {
            contor++;
        }
    }
    if (contor==0)
    {
        cout << "NU EXISTA" << endl;
    }
    else
    {
        cout << contor << endl;
    }
    return 0;
}
