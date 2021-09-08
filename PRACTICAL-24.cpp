#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int i,n,p1,p2,flag1=0,flag2=0;
cout<<"enter the number";
cin>>n;
for(int i=2;i<n;i++)
{
if(n%i==0)
{
p1=i;
p2=n/p1;
   break;
}
}
for(i=2;i<=(p1/2);i++)
{
if(p2%i==0)
{
flag1=1;
break;
}
}
for(i=2;i<=(p2/2);i++)
{
if(p2%i==0)
{
flag2=1;
break;
}
}
if(flag1==0&&flag2==0)
cout<<"semi prime(can be written as a product of 2 primes";
else
cout<<"not semi prime";
}

