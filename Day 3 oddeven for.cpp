#include <iostream>
#include <conio.h>
//ODD AND EVEN USING FOR//
using namespace std; 
int main()
{

	int n;
	cout<<"Enter 10 numbers : "<<endl;
	for (int i=0 ; i<10 ; i++)
	{
	//cout <<i <<endl;
	cout <<"Enter a number  : " ;
	cin >> n; 

	if (n % 2==0)
	{
	cout<<"Your number is even" <<endl;
	}
	else
	{
	cout<<"Your number is odd" <<endl;
	}
	}
}
