                                 //PRACTICAL-3
                        //Factorial of any natural number
#include<iostream>
using namespace std;
int main()
{
	long int fact=1,n;
	cout<<"The value of n is: ";
	cin>>n;
	for(int i=1;i<n+1;i=i+1)
	{
		fact=fact*i;
		
	}
	cout<<"factorial of n number is "<<fact;
	
}
