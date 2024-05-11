// Andrew Alvarez
// do while

#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	
	do
	{
		cout << " enter a positive number: ";
		cin >> number;
	}while(number < 0);
	
	cout << " Goodbye! " << endl;

	return 0;
}
