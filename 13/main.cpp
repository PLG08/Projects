#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[15], t[15];
        cin >> s;
        strcpy(t,s);
        for (int i=strlen(t); i>0; --i)
        {
            t[i] =0;
            cout<<t<<endl;
        }

    for(int i=0; s[i]; ++i)
        cout << s+i << endl;


    return 0;
}
