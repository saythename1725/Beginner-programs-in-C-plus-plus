                              //PRACTICAL 11
//Check whether the triangle is scalene or right-angled
#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Enter ths sides of triangle";
	cin>>a,b,c;
	if(a*a==b*b+c*c||c*c==b*b+a*a||b*b==c*c+a*a)
	cout<<"The triangle is right angled";
	else if(a!=b&&b!=c)
	cout<<"The triangle is scalene";
}
