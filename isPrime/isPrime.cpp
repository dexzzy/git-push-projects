#include <iostream>
using namespace std;

bool isPrime (int number);

int main()
{
	int number;
	cout <<  " Enter a number:";
	cin >> number;
	
	
	if( isPrime(number) == true)
	{
		cout << number << " is prime!" << endl;
		
	}
	else
	{
		cout << number << " is not prime!" << endl;
	}

	return 0;
}
bool isPrime(int number)
{
	if(number <= 1)
	{
		return false;
	}
	
	 	for( int i = 2; i < number; i++)
	 	{
	 		if ( number % i == 0 )
	 		{
	 			return false;
	 		}
	 	}
	 		return true;
}
