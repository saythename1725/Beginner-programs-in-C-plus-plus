                                         //PRACTICAL-8
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float A[5],sum=0,avg;
	cout<<"Enter five decimal numbers \n";
	for(int i=0;i<5;i++)
	cin>>A[i];
	for(int i=0;i<5;i++)
	sum=sum+round(A[i]);
	avg=sum/5;
	cout<<"The sum is "<<sum<<endl;
	cout<<"The average is "<<avg;

}

