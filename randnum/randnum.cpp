// Andrew Alvarez
// Guess Game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand( time (0));
	int counter = 0;
	int num1 = rand() % 100 + 1 , guess;
	
	do{
		cout << " Guess The number from  (1-100):";
		cin >> guess;
		counter++;
	
		 
	
		if ( guess > num1)
		{
		cout << " Too high try again " << endl;
		}
		else if ( guess < num1)
		{
		cout << " Too low try again " << endl;
		}
	}while(guess != num1 );
		cout << " congrats" << endl;
		cout << " amount of tries: " << counter << endl;


	return 0;
}
