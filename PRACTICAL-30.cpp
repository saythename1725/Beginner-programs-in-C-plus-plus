#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout<<"enter the grade";
	cin>>grade;
	switch(grade)
	{
		case 'A':
			cout<<"the marks= 5";
			break;
		
		case 'B':
			cout<<"the marks= 4";
			break;
		case 'C':
			cout<<"the marks= 3";
			break;
		case 'D':
			cout<<"the marks= 2";
			break;
		case 'E':
			cout<<"the marks= 1";
			break;
		default:
			cout<<"invalid output.";
	}
	cout<<endl<<"OK";
}
