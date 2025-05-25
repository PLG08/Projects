#include <iostream>

using namespace std;

struct nod 
{
    int info;
    nod *urm;
};
    

int main()
{
    int n, i;
    nod *prim=NULL, *q;
    
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        if(prim == NULL)
        {
            prim = new nod;
            q = prim;
        }
        else 
        { 
            q->urm = new nod;
            q = q->urm;   
        }
        cin >> q->info;
        
        
    }

    return 0;
}