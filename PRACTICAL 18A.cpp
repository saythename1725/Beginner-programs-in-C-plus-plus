                                   //PRACTICAL 18A
//Read from a text file and write to a text file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[200];
	cout<<"Enter your name,age and address "<<endl;
	//cin>>arr;
	cin.getline(arr,200);
	ofstream myfile("abc.txt",ios::app);//ofstream myfile;myfile("abc,txt");myfile,open(); It automatically opens the file
	myfile<<arr;
	myfile.close();
	cout<<"Writing operation done "<<endl;
	cout<<"Reading operation started "<<endl;
	char arr1[200];
	ifstream file("abc.txt");
	file.getline(arr1,200);
	cout<<"Array content :"<<arr1<<endl;
	cout<<"Reading operation completed ";
	return 0;
}
