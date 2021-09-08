#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float term,term1,diff,sum,x;
	int i=2,n=1;
	cout<<"enter the value of x";
	cin>>x;
	term=x;
	sum=1+term;
	diff=100;
	while(diff>pow(10,-10))
	{
		term1=x*(term/i);
		i=i+1;
		n=n+1;
		sum=sum+term1;
		diff=abs(term1-term);
		term=term1;
	}
cout<<"value of e^x at x ="<<x<<" is "<<sum;
}

