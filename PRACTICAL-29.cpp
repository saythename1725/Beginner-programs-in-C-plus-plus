#include<iostream>
using namespace std;
int main()
{
	int A[3][3],i,j;
	cout<<" enter the elements of matrix : \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>A[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
			A[i][j]=0;
		}
	}
	cout<<"The lower triangular matrix is \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
}
		
	
	
