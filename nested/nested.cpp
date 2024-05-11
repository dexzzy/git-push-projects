// Andrew Alvarez
//nested

#include <iostream>
using namespace std;

int main()
{
	int rows;
	int cols;


	cout << " Please Enter How many rows:";
	cin >> rows;
	
	cout << " Please Enter How many columns: ";
	cin >> cols;
	
	
	
	for ( int x = 0; x < rows; x++ )
	{
		for ( int y = 0; y < cols; y++ )
		{
			cout << " *"; 
		}
		
		cout << endl;
	}
	return 0;
}
