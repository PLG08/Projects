#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char o[200], r[10], *token, aux[200];
    int n;
    cin.getline(o,100);
    cin.getline(r,10);
    n = strlen(r);
    token = strchr(o, '_');
    while(token != NULL){
        strcpy(aux, token+1);
        strcpy(token+n, aux);
        strncpy(token, r, n);
        token = strchr(token+n, '_');

    }
    cout << o;

    return 0;
}
