#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("numere8.in");
ofstream fout ("numere8.out");

int main()
{
    int x, fr[10000] = {0}, i;

    while(fin >> x) {
        if(x < 10000) {
            fr[x] = 1;
        }
    }

    for(i = 9999; i >= 1; i--) {
        if(fr[i] == 0) {
            fout << i << " ";
        }
    }



    return 0;
}
