                                   //PRACTICAL 5
/*Write a program that prompts the user to input a positive integer.It should then output a message 
indicating whether the number is a prime number.*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int p,i,var=0;
	cout<<"enter the positive number";
	cin>>p;
	for(i=2;i<=sqrt(p);i=i+1)
	{
		if(p%i==0)
		{
			var=1;
			break;
		}
	}
		if(var==1)
		cout<<"composite";
		else
		cout<<"prime";
}
