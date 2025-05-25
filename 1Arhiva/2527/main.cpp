#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
ifstream fin("hanoi.in");
ofstream fout( "hanoi.out");
int k;

void hanoi(int n,char a,char c,char b)//mut de pe a pe c folosind tija intermediara b
{
if(n==1)
  fout<<a<<"->"<<c<<endl;
else
{
  hanoi(n-1,a,b,c );
  fout<<a<<"->"<<c<<endl;
  hanoi(n-1,b,c,a);
}
}

int main()
{
int n;
char a='A',b='B',c='C';
fin>>n;
fout<<pow(2,n)-1<<endl;
hanoi(n,a,c,b);//duc cele n discuri de pe tija a pe tija c, folosind tija interm b
return 0;
}