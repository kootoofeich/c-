#include<iostream>
using namespace std;
int main()
{
int N, M, c, n, a;
cin>>N;
n=0;
while (N!=0)
{
c=N%10;
N/=10;
M=N;
}
while (M!=0)
{
a=M%10;
if (a==c)
{
n++;
M/=10;
}
}
if (n>0)
cout<<"yes";
else
cout<<"no";
}
