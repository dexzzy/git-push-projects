#include <iostream>
#include <string>
using namespace std;

void enterGrades(string grades[], int SIZE);


int main()
{
	int correctAnswers = 0;
	int wrongAnswers = 0;
	const int SIZE = 20;
	string correctGrades[SIZE] = {"B","A","C","B","D","A","B","C","D","A","C","B","D","A","B","D","C","A","D","C"};
	string grades[SIZE];
	enterGrades(grades, SIZE);
	
	for(int x = 0; x < SIZE; x++)
	{
		if( grades[x] == correctGrades[x])
		{
			correctAnswers++;
		}
		else
		{
			wrongAnswers++;
		}
	}
	
	if(correctAnswers >=15)
	{
		cout << " congrats you passed " << endl;
	}
	else
	{
		cout << " You did not passed" << endl;
	}
	cout <<" number of correct answers:" << correctAnswers << endl;
	cout <<" number of incorrect answers:" << wrongAnswers << endl;


	return 0;
}
void enterGrades(string grades[], int SIZE)
{
	for(int grade = 0; grade < SIZE; grade++)
	{
		cout << " Enter answer choice: ";
		cin >> grades[grade];
	}
	
}
