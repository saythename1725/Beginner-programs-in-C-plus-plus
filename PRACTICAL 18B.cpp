                                   //PRACTICAL-18B
                        
                     //read from a text file and write to a text file.
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
	int A[]={631,73,19,23,43,29,182,121,302,321};
	
	ofstream inputfile("number.txt");
	 
	for(int count=0;count<10;count++)
	inputfile<<A[count]<<" ";
	inputfile.close();
	return 0;
		
}
