// andrew alvarez
// greater and least

#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int number;
	int largest = INT_MIN;
	int smallest = INT_MAX;
	
	cout << " Enter a series of integers, followed by -99 to end the series:";
	
		while(true)
	{
		cin >> number;
		
		if (number == -99)
		{
		break;
		}
		
		if (number > largest)
		{
			largest = number;
		}
		
		if (number < smallest)
		{
			smallest = number;
		}
	}

	return 0;
}

