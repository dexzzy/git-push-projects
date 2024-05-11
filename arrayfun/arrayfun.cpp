#include <iostream>
using namespace std;

// create a function with array parameter
void displayArray(int numbers[], int size);
int calculateMin(int numbers[], int size);





int main()
{
	const int SIZE = 3;
	int numbers[SIZE] = {23 ,21 ,5};
	displayArray(numbers, SIZE);
	cout << " Min: " <<  calculateMin(numbers, SIZE) << endl;

	return 0;
}
void displayArray(int numbers[], int size)
{
	for(int index = 0; index < size; index++)
		cout << numbers[index] << " "; 
		
	cout << endl;
	
}
int calculateMin(int numbers[], int size)
{
	int min =  numbers[0];
	for( int index = 1; index < size; index++)
	{
		if(numbers[index] < min)
		{
			min = numbers[index];
		}
	}
	
	return min;
}
