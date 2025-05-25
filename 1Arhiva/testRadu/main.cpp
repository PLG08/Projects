#include <iostream>

using namespace std;

int main()
{
    int a[100], b[100], n, m, i, j, poz, val, c[200], k, c1, c2, c3;
    cout<<"n,m:";
    cin>>n>>m;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<m; i++)
        cin>>b[i];

    for(i=0; i<3; i++){
        cout<<"inserare a: ";
        cin>>poz>>val;
        for(j=n-1; j>=poz; j--){
            a[j+1]=a[j];
        }
        a[poz]=val;
        n++;
    }
    for(i=0; i<3; i++){
        cout<<"inserare b: ";
        cin>>poz>>val;
        for(j=m-1; j>=poz; j--){
            b[j+1]=b[j];
        }
        b[poz]=val;
        m++;
    }

    c1=a[0];
    for(i=1; i<=n; i++){
        c2=a[i];
        while(c2!=0){
            c3=c1%c2;
            c1=c2;
            c2=c3;
        }

    }
    cout<<"cmmdc-ul este: "<<c1<<endl;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                c1=a[i];
                a[i]=a[j];
                a[j]=c1;
            }
        }
    }

    for(i=0; i<m-1; i++){
        for(j=i+1; j<m; j++){
            if(b[i]>b[j]){
                c1=b[i];
                b[i]=b[j];
                b[j]=c1;
            }
        }
    }
    i=j=k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else if (b[j] < a[i]) {
            c[k++]=b[j++];
        }
        else {
            c[k++] = a[i++];
            j++;
        }
    }
    while (i<n){
        c[k++]=a[i++];
    }
    while (j<m){
        c[k++]=b[j++];
    }



    cout<<"a: ";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl<<"b: ";
    for(i=0; i<m;i++)
        cout<<b[i]<<" ";
    cout<<endl;

    return 0;
}
