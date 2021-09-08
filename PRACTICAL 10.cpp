#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,e,sum;
	cout<<"Enter five decimal numbers"<<endl;
	cin>>a>>b>>c>>d>>e;
	sum=a+b+c+d+e;
	cout<<"Sum of these decimal numbers is : "<<round(sum);
	return 0;
}
