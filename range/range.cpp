#include <iostream>
using namespace std;



int main()
{

	int numbers[5] = {12,13,17,19,22};
	
	// range based loop
	
	for(int temp :  numbers)
	{
		cout <<  temp << endl;
	}
	// regular for loop
	for(int x = 0; x < 5; x++)
	{
		cout << numbers[x] << endl;
	}
	return 0;
}
