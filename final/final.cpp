#include <iostream>
#include <string>
using namespace std;

double findmin (double grade1, double grade2, double grade3, double grade4, double grade5);
double CalculateAverage(double grade1, double grade2, double grade3, double grade4, double grade5);
void Grades (double &grade1, double &grade2, double &grade3 , double &grade4, double &grade5);
//void FinalGrade (double grade );

int main()
{
	double grade1, grade2, grade3, grade4, grade5;
	double min;
	double avg;

	
	return 0;
}

void Grade (double grade1, double grade2, double grade3, double grade4, double grade5)
{
	cout << " Enter 5 Grades:" ;
	cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;

}
double findmin(double grade1, double grade2, double grade3, double grade4, double grade5)
{
	double min = grade1;
	if(grade2 < min)
	{
		min = grade2;
	}
	if(grade3 < min)
	{
		min = grade3;
	
	}
	if( grade4 <  min)
	{
		min = grade4;
	}
	if( grade5 < min)
	{
		min = grade5;
	}
		return min;
}
 double CalculateAverage(double grade1, double grade2, double grade3, double grade4, double grade5, double min)
{
	return (( grade1 + grade2 + grade3 + grade4 + grade5) - min)/4;
}
//  void FinalGrade(double avg)

