#include <iostream>

using namespace std;

int main()
{
    int n, s=0, i;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            s = s - i*(i+1);
        }
        else
        {
            s = s + i*(i+1);
        }
    }

    cout << "Rezultatul este " << s << endl;
    return 0;
}
