#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("interclasare.in");
ofstream fout("interclasare.out");
int main()
{
    int a[100001],b[100001],c[200001],n,m,i,j;

    fin>>n;

    for(i=1;i<=n;i++)
        fin>>a[i];

    fin>>m;

    for(j=1;j<=m;j++)
        fin>>b[j];

    int k=0;
    for(i=1;i<=n;i++){
        k++;
        c[k]=a[i];
    }
    for(j=1;j<=m;j++){
        int gasit=0;
        for(i=1;i<=n;i++)
        if(b[j]==a[i]){
            gasit=1;
            break;
        }
        if(gasit==0){
            k++;
            c[k]=b[j];
        }
    }

    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
    if(c[i]>c[j]){
        int aux=c[i];
        c[i]=c[j];
        c[j]=aux;
    }

    fout<<c[k];
    return 0;
}
