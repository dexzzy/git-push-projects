//Andrew Alvarez
//Times Table

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	int times = 0;
	int choice;
	int total;
	
	cout << " input a number to be multiplied : " << endl;
	cin >> choice;
	
	while ( times < 13 )
	{
	total = times * choice;
	
	cout << times << "X" << choice << " = " << total << endl;
	
	times++;
	}







	return 0;
}
