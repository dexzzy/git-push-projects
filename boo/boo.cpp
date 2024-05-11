// Andrew Alvarez

#include<iostream>
using namespace std;

// function prototype
bool isEven(int);
int main()
{
	int number;
	cout << " Enter an Integer: " ;
	cin >> number;
	
	if ( isEven ( number) )
	{
		cout << number << " is even!" << endl;
	}
	else
	{
		cout << number << " is odd! " << endl;
	}
	return 0;
}
// function definition
bool isEven(int number)
{
	bool even = false; //flag
	if( number % 2 == 0)
	{
		even = true;
	}
	return even;
}
