// Andrew Alvarez
// Menu

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double ADULT_RATE = 40.5;
	const double CHILD_RATE = 20.5;
	const double SENIOR_RATE = 30.5;

	int choice;
	int months;
	double charges;

	cout << " Trufit Gym Membership" << endl;
	cout << "1) Standard Adult Membership " << endl;
	cout << "2) Standard Child Membership" << endl;
	cout << "3) Standard Senior Membership" << endl;
	cout << "4) Cancel Membership" << endl;
	cout << "5) Quit Program" << endl;
	
	cout << " Enter a choice [1-5]:" ;
	cin >> choice;
	
	if ( choice >= 1 && choice <= 3)
	{
		cout << " Enter the months" << endl;
		cin >> months;
	}
	cout << fixed << setprecision(2);
	switch(choice)
	{
		 case 1:
		 charges = months * ADULT_RATE;
		 cout << " Adult Total: " << charges << endl;
		 break;
		 
		 case 2:
		 charges = months * CHILD_RATE;
		 cout << " Child Total: " << charges << endl;
		 break;
		 
		 case 3:
		 charges = months * SENIOR_RATE;
		 cout << " Senior Total: " << charges << endl;
		 break;
		 
		 case 4:
		 	cout << "hahaha yeah right! " << endl;
		 break;
		default:
		cout << " Goodbye!" << endl;
		break;
	}
	
	
	
	
	return 0;
}
