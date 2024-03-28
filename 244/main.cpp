#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("cifreord.in");
ofstream fout("cifreord.out");
int main()
{
    int fr[10] = {0}, i, j, x, n, k;
    fin>>n;

    for(i=1; i<=n; i++){
        fin>>x;
        fr[x]++;
    }

    k=0;

    for(i=0; i<=9; i++)
        for(j=1; j<=fr[i]; j++){
            fout << i << " ";
            k++;
            if(k%20==0)
                fout << endl;
    }

    return 0;
}
