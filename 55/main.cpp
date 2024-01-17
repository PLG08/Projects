#include <iostream>

using namespace std;

int main()
{
    int nr,MIN;
    MIN=1000000;

    do{
    cin>>nr;
    if (nr<MIN)
        MIN=nr;

    }while (nr!=0);

    if (MIN<0)
        cout<<"NU EXISTA";

    cout << MIN << endl;
    return 0;
}
