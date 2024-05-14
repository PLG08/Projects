#include <iostream>
#include<fstream>
using namespace std;

ifstream fin("pareimpare.in");
ofstream fout("pareimpare.out");

int main()
{
    int fr[100]= {0}, i, x;
    while(fin >> x)
        fr[x] = 1;
    for(i=1; i<=99; i+=2)
        if(fr[i]==1)
            fout << i<< " ";
    fout << endl;
    for(i=98; i>=0; i-=2)
        if(fr[i] == 1)
            fout << i << " ";

    return 0;

}
