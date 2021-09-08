#include<iostream>
using namespace std;
int main()
{
    int x,sum=0,digit,org;
	cout<<"enter the number ";
	cin>>x;
	org=x;
	while(x>0)
	{
		digit=x%10;
		sum=sum*10+digit;
		x=x/10;
	}
	cout<<"reverse of the given number is "<<sum<<endl;
	if(org==sum)
	cout<<"Palindrome ";
	else
	cout<<"not palindrome  ";
}
