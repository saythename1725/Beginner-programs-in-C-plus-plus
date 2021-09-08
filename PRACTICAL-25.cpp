#include<iostream>
using namespace std;
int main()
{
	int i,j,n,p1,p2,flag1=0,flag2=0;
	cout<<"Enter a number ";
	cin>>n;
	for(i=2;i<=n-2;i++)
	{
		p1=i;
		p2=n-i;
		for(j=2;j<p1;j++)
		{
			if(p1%j==0)
			flag1=1;
		}
		for(j=2;j<p2;j++)
		{
			if(p2%j==0)
			flag2=1;
		}
	
		if(flag1==0&&flag2==0&&p1<p2)
		cout<<"the number is a sum of prime numbers "<<p1<<" and "<<p2<<endl;
		flag1=0;
		flag2=0;
	}
	return 0;
}
