#include <iostream>
#include <string>
using namespace std;

void display(string months[], int days[], int length);



int main()
{
	const int LENGTH = 12;
	
	string  months[ LENGTH] = {
		" JAN", "FEB", "MAR",
		" APR", "MAY", "JUN",
		" JUL", "AUG", "SEP",
		" OCT", "NOV", "DEC"
		 };
	
	int days[LENGTH] = {31,28,31,30,31,30,31,30,31,30,31,30};
	
	display(months,days,LENGTH);
	
	return 0;
}
void display(string months[], int days[], int length)
{
	for(int x = 0; x < length; x++ )
	{
		cout << months[x] << ": " << days[x] << " days " << endl;
	}
}
