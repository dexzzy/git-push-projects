// Andrew Alvarez
// Sentinel Controlled Loop

#include <iostream>
using namespace std;

int main()
{
	int total = 0;
	int points = 0;
	int game = 0;
	
	while (points != -1 )
	{
		total += points;
		cout << " Enter points for game" << ++game << " : ";
		cin >> points;
		
	}
	cout << " Total points are: " << total << endl;

	return 0;
}
