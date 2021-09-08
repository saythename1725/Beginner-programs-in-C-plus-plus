 /* Ques12. Write a value returning function smaller to determine the smallest number from a set of numbers.
            Use this function to determine the smallest number from a set of 10 numbers.  */
            
#include<iostream>
using namespace std;
int smaller(int number[10])
{
	int min=number[0],i;
	for(i=1;i<10;i++)
		if(number[i]<min)
			min=number[i];
	return min;
		
}
int main()
{
	int num[10],i,smallest_number;
	cout<<"enter any 10 numbers "<<endl;
	for(i=0;i<10;i++)
		cin>>num[i];
	smallest_number=smaller(num);
	cout<<"the smallest number among the 10 numbers entered is "<<smallest_number;
	return 0;
}
