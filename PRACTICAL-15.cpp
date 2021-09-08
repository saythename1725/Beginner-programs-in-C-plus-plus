                            //PRACTICAL 15
//  Enter 10 integers into an array and then search for a particular integer in the array
#include<iostream>
using namespace std;
int main()
{
	int A[10],i,j,x,temp=5,pos;
	cout<<" Enter the elements of array ";
	for(i=0;i<10;i++)
	cin>>A[i];
	cout<<"Enter the element which need to be searched is ";
	cin>>x;
	for(j=0;j<10;j++)
	{
		if(x==A[j])
		{
		    temp=10;
		    pos=j+1;
		    break;	
		}
	}
	if(temp==5)
	cout<<"Element is not present in the array";
	else
	cout<<"Element is present in the array at the "<<pos<<"th position";
}
		
	
