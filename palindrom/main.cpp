#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int ok=1, i, j;
    char palindrom[100];

    cin.getline(palindrom, 100);
    for(i=0, j=strlen(palindrom)-1; i<strlen(palindrom)/2; i++, j--){
        if(palindrom[i] != palindrom[j]){
            ok=0;
            break;
        }


    }
    if(ok==1)
        cout << "Cuvantul este palindrom" << endl;
        else
        cout << "Cuvantul nu este palindrom" << endl;

    return 0;
}
