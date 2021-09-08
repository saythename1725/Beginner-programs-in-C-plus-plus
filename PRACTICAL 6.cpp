                                //PRACTICAL-6
/*write a programme that prompts the user to input the value of a,b and c involved in the equation ax^2+bx+c=0 and
output the types of roots of equation .Also the programme should output all the roots of the equation. */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,D;
	cout<<"enter the co-efficients of quadratic equation \n";
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	if(D>0)
	{
		cout<<"roots are real and distict \n";
		cout<<"roots are "<<(-b+sqrt(D))/(2*a)<<" and "<<(-b-sqrt(D))/(2*a);
	}
	else if(D==0)
	{
		cout<<"the roots are real and equal  \n";
		cout<<"roots are"<<-b/(2*a)<<" and "<<-b/(2*a);
	}
	else
	{
		cout<<"the roots are imaginary \n";
		cout<<"the roots are"<<(-b/2*a)<<"+i"<<sqrt(-D)/(2*a)<<" and "<<(-b/2*a)<<"-i"<<sqrt(-D)/(2*a);
	}
}
