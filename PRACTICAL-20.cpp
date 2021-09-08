                //PRACTICAL-20
                //reversing the digit
#include<iostream>
using namespace std;
int main()
{
	int x,sum=0,digit;
	cout<<"enter the number";
	cin>>x;
	while(x!=0)
	{
	digit=x%10;
	sum=sum*10+digit;
	x=x/10;
	}
	cout<<"reverse of the given number is "<<sum;
}

