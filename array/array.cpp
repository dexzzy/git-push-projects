#include <iostream>
#include <string>
using namespace std;

int main()
{
 /* Declare an array
 	use a named constant for the size/length of array
 	assign values to the array
 	display values of the array
 	array intialization list

*/
	const int SIZE = 5;
	int numbers[SIZE]; // will make array of size 5

	// assign values to each element
	numbers[0] = 44;
	numbers[1] = 33;
	numbers[2] = 22;
	numbers[3] = 11;
	numbers[4] = 55;
/*	
	cout << numbers[0] << endl;
	cout << numbers[1] << endl;
	cout << numbers[2] << endl;
	cout << numbers[3] << endl;
	cout << numbers[4] << endl;
*/


	for(int counter = 0; counter < SIZE; counter++ )
	{
		cout << numbers[ counter ] << endl;
	}
	// user to enter the values in the array
		for( int counter = 0; counter < SIZE; counter++ )
		{
			cout << " Enter Value" << counter << ": " ;
			cin >> numbers[ counter];

		}
		// display the new values
		for ( int counter = 0; counter < SIZE; counter++)
		{
			cout << numbers[ counter ] << " ";
		}
		cout << endl;
		
		
		// create array and intialize it using a list
			string names[SIZE] = { "Homer", "Bart", "Lisa", "Marge"," Maggie"};
			
			for( int x = 0; x < SIZE; x++)
			{
				cout << names[x] << endl;
			}
	return 0;
}
