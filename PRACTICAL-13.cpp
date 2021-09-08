/* Ques13. Write a function that takes as a parameter an integer (as a long value) & returns the number 
           of odd, even & zero digits. Also write a program to test your function. */
           
#include<iostream>
using namespace std;
void number(long x)
{
	int even=0,odd=0,zero=0,a;
	while(x!=0)
	{
	  a=x%10;
	  if(a==0)
	    zero++;
	  else 
	    if(a%2==0)
		  even++;
	  else
	   odd++;
	  x=x/10;
	}	
	cout<<"no. of even digits are "<<even<<"\n no. of odd digits are "<<odd<<"\n no. of zero digits are "<<zero;
}

int main()
{
	long num;
	cout<<"enter a large positive integer ";
	cin>>num;
	number(num);
}
