                                          //PRACTICAL 2
/*Write a user defined function to find the absolute value of an integer and use it to evaluate
the function (-1)^n/|n|*/
#include<iostream>
#include<cmath>
using namespace std;
float mod(float x);
int main()
{
	float n,p,q,r;
	cout<<"Enter the number : ";
	cin>>n;
	p=pow(-1,n);
	q=mod(n);
	r=p/q;
	cout<<"The required result is "<<r;
}
float mod(float m)
{
	if(m>0)
	return m;
	else
	return(-m);
}
