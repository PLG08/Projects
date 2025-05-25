#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifreord1.in");
ofstream fout("cifreord1.out");
int main()
{
    int fr[10] = {0}, x, cnt=0, j, i;

    while (fin >> x) {

        do {
            fr[x%10]++;
            x/=10;
        }while(x!=0);
    }
    for(i=9; i>=0; i--) {
        for(j=1; j<=fr[i]; j++) {

            fout << i << " ";
            cnt++;
            if(cnt%20==0) {
                fout << "\n";
            }
        }
    }

    fin.close();
    fout.close();

    return 0;
}
