                                          //PRACTICAL 17
//Product and addition of vectors
#include<iostream>
using namespace std;
int main()
{
	int A[8]={1,2,3,4,5,6,7,8},B[8]={0,2,3,4,0,1,5,6},C[8],D[8];
	for(int i=0;i<8;i++)
	{
		C[i]=A[i]*B[i];
		D[i]=A[i]+B[i];
	}
	cout<<"The product of A and B is \n";
	for(int i=0;i<8;i++)
	cout<<C[i]<<" ";
	cout<<"\n";
	cout<<"The addition of A and B is \n";
	for(int i=0;i<8;i++)
	cout<<D[i]<<" ";
	cout<<"\n";
}
