#include <iostream>

using namespace std;

int main()
{
    int B,S,C,P,R;
    cin>>B>>S;
    R=S-(B*C);
    P=B-R;
    C=S-B;

    cout <<C<<' '<<P<< endl;
    return 0;
}
