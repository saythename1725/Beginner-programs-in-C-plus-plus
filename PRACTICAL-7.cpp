                                     //PRACTICAL 7
/*Write a program that generates random integer between 0 and 99.Given that the first two Fibonacci 
numbers are 0 and 1,generate all Fibonacci numbers less than or equal to generated number.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int n,a=0,b=1,c;
	srand(time(NULL));
	n=rand()%100;//cout<<rand()+time(0);
	c=a+b;
	cout<<"Fibonacci numbers less than or equal to "<<n <<"are "<<a<<" , "<<b<<" , ";
	while(c<=n)
	{
		cout<<c<<" , ";
		a=b;
		b=c;
		c=a+b;
	}
}

