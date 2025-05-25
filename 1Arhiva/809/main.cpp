#include <iostream>
#include<fstream>
using namespace std;

ifstream fin("nrlipsa1.in");
ofstream fout("nrlipsa1.out");

int main()
{
    int fr[100]={0}, x, mic=0, mare=0, gasit=0, i;
    while(fin >> x)
        if(x >= 10 && x <= 99)
            fr[x] = 1;
    for(i=10; i<=98; i+=2)
        if(fr[i] == 0)
        {
            mic = i;
            gasit++;
            break;
        }
    for(i=98; i>=10; i-=2)
        if(fr[i] == 0)
        {
            mare = i;
            gasit++;
            break;
        }
    if(gasit == 2 && mic != mare)
        fout << mic << " " << mare;
    else
        fout << "nu exista";

    return 0;
}
