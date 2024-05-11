//Andrew Alvarez
// Area Calculator

#include <iostream>
using namespace std;

int main()
{
	double area,radius;
	const double PI = 3.14;
	
	 // ask user for radius
	 cout << " Enter radius:";
	 cin >> radius;
	 
	 // calculate radius
	 
	
	 area = PI * radius * radius;

cout << " The area of a circle is " << area << endl;

	return 0;
	
}
