//Andrew Alvarez
// Shape Calculator

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int question, radius , area ,length , width , base , height;
	
	
	
	cout << " 1. Calculate the area of a circle " << endl;
	cout << " 2. Calculate the area of a rectange" << endl;
	cout << " 3. Calculate the area of a triangle" << endl;
	cout << " 4. Quit" << endl;
	cout << " Please Select an option (1-4): ";
	cin >> question;
	
	
	switch(question)
	{
		case 1:
		cout <<" what is the radius of the circle? ";
		cin >> radius;
		area = 3.14 * radius * radius;
		cout << " the area of your circle is " << area << endl;
		break;
		
		case 2:
		cout << " what is the length of your rectangle? ";
		cin >> length;
		cout << " what is the width of the rectangle";
		cin >> width;
		cout << " the area of the rectangle is" << area << endl;
		break;
		
		case 3:
		cout << " what is the base of a triangle? ";
		cin >> base;
		cout << " what is your height of the triangle? ";
		cin >> height;
		area = (0.5) * ( base * height);
		cout << " the area of your triangle is " << area << endl;
		break;
		
		case 4:
		cout << " goodbye" << endl;
		break;
		
		default:
		cout << " invalid input" << endl;
		}


	return 0;
}
