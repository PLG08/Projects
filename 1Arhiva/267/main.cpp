#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("unice.in");
ofstream fout ("unice.out");
int fr[100] = {0}, i, x, j;
int main()
{
    int n;

    fin >> n;
    for (i=1; i<=n; i++) {
        fin >> x;
        fr[x]++;
    }

    for (i=0; i<=99; i++) {
        if(fr[i] == 1)
            fout << i << " ";
    }



    fin.close();
    fout.close();
    return 0;

}
