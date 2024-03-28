#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("unice.in");
ofstream fout ("unice.out");
int fr[100000] = {0}, i, x, j;
int main()
{
    int n;

    fin >> n;

    while(fin>>x)
       fr[x]++;
    for(j=0;j<=99;j++)
        {
            if(fr[j]==1) fout << j << " ";
        }

    return 0;
    fin.close();
    fout.close();
}
