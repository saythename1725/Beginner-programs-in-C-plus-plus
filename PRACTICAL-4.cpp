//PRACTICAL-4
/*read floating numbers and compute two averages :the average
 of negative numbers and the average of positive numbers*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float num,n,countP=0,countN=0,sumP=0,sumN=0;
	cout<<"enter the no of numbers \n";
	cin>>n;
	cout<<"enter the numbers \n";
	for(int i=0;i<n;i=i+1)
	{
		cin>>num;
		if(num>0)
		{
			countP=countP+1;
			sumP=sumP+num;
		
	}
	else
	{
		countN=countN+1;
		sumN=sumN+num;
		
	}

cout<<"average of positive numbers : "<<sumP/countP;
cout<<"\n";
cout<<"average of negative numbers : "<<sumN/countN;
}
}






