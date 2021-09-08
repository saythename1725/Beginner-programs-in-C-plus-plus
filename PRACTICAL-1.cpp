                                    //PRACTICAL 1
            //The sum of the series 1/1+1/2+1/3+...+1/n
#include<iostream>
using namespace std;
int main()
{
	float sum=0;
	int i,n;
	cout<<"The value of n is: ";
	cin>>n;
	for(i=1;i<=n;i++)
	sum=sum+(1.0/i);
	cout<<"The required sum is "<<sum;
}
