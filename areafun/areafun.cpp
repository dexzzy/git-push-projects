// ANDREW ALVAREZ

#include <iostream>
using namespace std;

//function prototype
int calculateArea(int length, int width);

int main()
{
	int area, length, width;
	
	cout << " Enter length: " ;
	cin >> length;
	
	
	cout << " Enter width: ";
	cin >> width;
	
	area = calculateArea(length, width);// function call
	
	cout << " Area:" << area << endl;
	
	return 0;
}
// function definition
int calculateArea( int length, int width)
{
	 int area = length * width;// local variables
	 return area;
}
