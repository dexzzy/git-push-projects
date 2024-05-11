#include <iostream>
#include <cstdlib>
using namespace std;

int GetChoice( int &choice);
double  GetRad  ( double &radius);
double CalcArea ( double radius);
double	CalcCircum (double radius);
double	CalcDiam   ( double radius);


void DisplayMenu();

int main()
{
	
	double circum, area, radius, diameter;
	int choice;


	do
	{
	DisplayMenu();
 GetChoice( choice);

		if (choice <= 0)
		{
			cout << " error! " << endl;
		}	
		else
		{
			switch(choice)
			{
				case 1:
					GetRad ( radius);
					break;
				case 2:
					cout <<	CalcArea( radius)<< " is the area " << endl;
					break;
				case 3:
					cout << CalcCircum ( radius) << " is the Circumference " << endl;
					break;
				case 4:
					cout << CalcDiam (radius) << " is the diameter " << endl;
					break;
				default:
					cout << " goodbye" << endl;
					
					}
			}

		cin.ignore();
		cin.get();	

		system ( " clear");
			
	}while( choice !=5);










	return 0;
}
double CalcArea( double radius)
{
	return 3.14 *( radius * radius);
}

double CalcCircum ( double radius)
{

	return  2 * 3.14 * radius;

}

double  CalcDiam ( double radius)
{
	return 2 * radius;

}

double GetRad ( double &radius)
{

	cin >> radius;


}


void DisplayMenu()
{
	 cout << " Circle Application " << endl;
	 cout << " ==================" << endl;
	 cout << " 1)Get Radius " << endl;
	 cout << " 2)Calculate Area" << endl;
	 cout << " 3)Calculate Circumference " << endl;
	 cout << " 4)Calculate Diameter " << endl;
	 cout << " 5)Exit Application " << endl;
	 cout << " Enter a Choice (1-5):";



}
int GetChoice ( int &choice)
{
	cin >> choice;
}
