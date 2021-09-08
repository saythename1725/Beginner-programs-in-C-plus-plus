#include<iostream>
#include<cmath>
const float PI=3.14;
using namespace std;
float factorial(int exponent);
float cos();

int deg,exponent,n,i;
float rad,deno,nume,result;
int main()
{

cout<<"enter the degree: ";
cin>>deg;
cout<<endl;
cos();
return 0;

}
float cos()
{
n=5;
result=0.0;
rad=deg*PI/180;
for(i=0;i<n;i++)
{
exponent=2*i;

nume=pow(rad,exponent);
deno=factorial(exponent);
result=result+((nume*pow(-1,i))/deno);
}
cout<<"cos("<<deg<<")= "<<result<<endl;
}
float factorial(int exponent)
{
int i;
float fact=1;
for(i=1;i<=exponent;i++)
{
fact=fact*i;

}
return fact;
}
