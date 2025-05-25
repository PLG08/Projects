#include <iostream>

using namespace std;

int main()
{
    int n, v[1000], x, i, st, dr, j, aux, mij;

    cin >> n;

    for(i=0; i<n; i++)
        cin >> v[i];

    for(i=0; i<n;i++)
        for(j=i+1; j<n-1; j++)
        if(v[i]>v[j]){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }

    cin >> x;
    st=0; dr=n;

    while(st<dr){
        mij = (st+dr)/2;
        if(v[mij]==x) {
            st=dr=mij;
        }
        else if(v[mij] < x) {
            st = mij + 1;
        }
        else
        {
            dr = mij-1;
        }

    }

    if(v[mij] == x) {
        cout << "pozitia este: " << mij;
    } else {
        cout << "Numarul nu exista";
    }




    return 0;
}
