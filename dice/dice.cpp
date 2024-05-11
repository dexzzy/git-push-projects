// Andrew Alvarez
// Dice

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	//seed the generator
	srand( time (0) ) ;
	int die1 = rand() % 6  +1;
	int die2 = rand() % 6 +1;

	cout << " Dice Roll: " << die1 << " " << die2 << endl;


	return 0;
}
