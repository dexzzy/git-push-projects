#include <iostream>
#include <cmath>
using namespace std;

void EnterValues(double &, double &); // pass by reference
double CalcArea(double, double);
double CalcPerimeter( double, double);
double CalcDiagonal(double, double);
void DrawRectangle( double, double);
void DisplayMenu();



int main()
{
	double length = 0;
	double width = 0;
	int choice;
	
	
	EnterValues(length, width);
	
	do
	{
		DisplayMenu();
		cin >> choice;
		
		
		switch(choice)
		{
			case 1:
				EnterValues(length,width); // function call
				break;
			case 2:
				cout << " Area:" << CalcArea(length,width) << endl;
				break;
			case 3:
				cout << " Perimeter:" << CalcPerimeter(length, width) << endl;
				break;
			case 4:
				cout <<  "Diagonal:" << CalcDiagonal(length,width) << endl;
				break;
			case 5:
				DrawRectangle(length, width);
				break;
			case 6:
				cout << " Goodbye" << endl;
				break;
			default:
			
				cout << " Error" << endl;
		
		}
		cin.ignore();
		cin.get();
		
	}while (choice != 6);

	return 0;
}

// function defintion

void EnterValues( double &length, double &width)
{
	cout << " Enter the Length: ";
	cin >> length;
	
	cout << " Enter the width: ";
	cin >> width;

}

double CalcArea( double length, double width)
{
	double area;
	area = length * width;

		return area;

}
double CalcPerimeter ( double length, double width)
{
	return 2 * (length + width);

}
double CalcDiagonal( double length, double width)
{
	double diag = sqrt(pow(length,2) + pow (width,2) );
	return diag;

}
void DrawRectangle( double length, double width)
{
	for(int x = 0; x < length; x++ )
	{
		for ( int y = 0; y < width; y++)
		{
			cout << "*";
		}
		cout << endl;
	}


}

void DisplayMenu()
{
	cout << " Rectangle Calculator " << endl;
	cout << " ====================" << endl;
	cout << "1) Change Values" << endl;
	cout << "2) Calculate Area" << endl;
	cout << "3) Calculate Perimeter" << endl;
	cout << "4) Calculate Diagonal" << endl;
	cout << "5) Draw Rectangle" << endl;
	cout << "6) End Application" << endl;
	cout << "Enter a choice [1-6]:" ;

}
