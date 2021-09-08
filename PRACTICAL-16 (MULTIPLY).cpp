//PRACTICAL-16
/* multiplication of 2 matrices using two-dimensional arrays*/
#include<iostream>
using namespace std;
int main()
{
	int A[3][3],B[3][3],C[3][3],i,j,k;
	cout<<"enter the elements of 1st matrix : \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"enter the elements of the 2nd matrix : \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
		cin>>B[i][j];
		}
	}

    for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	C[i][j]=0;
	for(k=0;k<3;k++)
{
	C[i][j]=C[i][j]+A[i][k]*B[k][j];
}
}
}
//displaying the matrix C
cout<<"elements of A*B are : \n";
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		cout<<C[i][j]<<" ";
	}
		cout<<"\n";
	}
}

