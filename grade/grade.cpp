//Andrew Alvarez
// Grade Calculator

#include <iostream>
using namespace std;

int main()
{
	double grade1, grade2, grade3, average;
	char LetterGrade;
	
	// Ask for letter grade
	cout << " Enter grade 1: ";
	cin >> grade1;
	
	cout << " Enter grade 2:";
	cin >> grade2;
	
	cout << " Enter grade 3:";
	cin >> grade3;
	
	// calculate average
	
	average = ( grade1 + grade2 + grade3) / 3.0;
	
	// display the average
	
	cout << " Average:" << average << endl;

//Congratulate perfect average

if (average  == 100)
{

	cout << "good job!!! Perfect Average! Pizza Party!" << endl;

}
else 
{
	cout << " Try Harder next time!" << endl;
}


//determine letter grade

if ( average >= 90 )
{
	LetterGrade = 'A';
}
else if(average >= 80 )
{
	 LetterGrade = 'B';
}
else if (average >= 70 )
{
	LetterGrade ='C';
}
else if  (average >= 60 )
{
	LetterGrade ='D';
}	
else
{
	LetterGrade = 'F';
}	
	
// Display Letter Grade

cout << "Letter Grade:"  << LetterGrade << endl;

	return 0;
}
