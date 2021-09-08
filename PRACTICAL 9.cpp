#include<iostream>
using namespace std;
int main()
{
	int firstNum,secondNum,sumEven=0,sumSquareOdd=0;
	cout<<"Enter 1st number and 2nd number (1st number should be less than 2nd number)"<<endl;
	cin>>firstNum>>secondNum;
	while(firstNum>secondNum)
	{
	cout<<"1st number should be less than 2nd number. Please enter again"<<endl;
	cin>>firstNum>>secondNum;
    }
    cout<<"All odd numbers between firstNum and secondNum are : \n";
    for(int i=firstNum+1;i<secondNum;i++)
    {
    	if(i%2!=0)
    	{
    		cout<<i<<" ";
    		sumSquareOdd=sumSquareOdd+(i*i);
		}
	}
	cout<<"\nAll even numbers between firstNum and secondNum are : \n";
    for(int i=firstNum+1;i<secondNum;i++)
    {
    	if(i%2==0)
    	{
    		cout<<i<<" ";
    		sumEven=sumEven+i;
		}
	}
	cout<<"\nSum of all even numbers = "<<sumEven<<endl;
	cout<<"\nSum of square of all odd numbers = "<<sumSquareOdd;
	return 0;
}
