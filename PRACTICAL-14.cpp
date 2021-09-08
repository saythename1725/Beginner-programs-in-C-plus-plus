//PRACTICAL-14
/*enter 100 integers into an array and sort them in and ascending/descending order and print the 
largest/smallest integers*/
#include<iostream>
using namespace std;
int main()
{
	int A[10],i,j,temp;
	cout<<"enter the elements to be sorted \n";
	for(i=0;i<10;i++)
	cin>>A[i];
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
		
		if(A[j]>A[j+1])
		{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
	}
}
cout<<"elements in ascending order : \n";
for(i=0;i<10;i++)
cout<<A[i]<< " ";
cout<<"\n";
cout<<"elements in descending order: \n";
for(i=9;i>=0;i--)
cout<<A[i]<<" ";
}

