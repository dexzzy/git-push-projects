// Andrew Alvarez
// Loops

#include <iostream>
using namespace std;

int main()
{
	// declare variables
	int numberOfTests; // number of tests scores
	double testScore; // to hold one test score at a time
	double totalScore; // the sum of all tests scores
	double average;
	char choice;
	
	do 
	{
		// ask user number of tests
		cout << " Enter number of test: " ;
		cin >> numberOfTests;
		// create the code to ask for each test score and accumulate
		totalScore = 0;
		
		
		
		for (int counter = 0; counter < numberOfTests; counter++)
		{
			// ask for a  test score
			cout << " Enter test score" << counter +1 <<":  ";
			cin >> testScore;
			totalScore = totalScore + testScore;
			
		
		}	
		// calculate average
		average = totalScore / numberOfTests;
		cout << " Total: " << totalScore << endl;
		cout << " Average: " << average << endl;
		
		// code to repeat program
			cout << " would you like to try again [y/n]: ";
			cin >> choice;
	
	
	}while( choice == 'y' || choice == 'Y');
	
	if ( choice == 'n' )
	cout << " goodbye!" << endl;
	
	
	return 0;
}

