#include<iostream>
using namespace std;
int main()
{
	int A[3][3],temp=0;
	cout<<"enter the elements of matrix A : \n";
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
			if(A[i][j]!=A[j][i])
			temp=1;
		}
		if(temp==1)
		cout<<"Matrix is not symmetric";
		else
		cout<<"Matrix is symmetric";
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
		cout<<"The sum of the matices A and B is \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<C[i][j]<<"   ";
		}
		cout<<"\n";
	}
}	
