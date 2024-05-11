// Andrew Alvarez
// Height

#include <iostream>

using namespace std;

int main() 
{
	int height,feet, inches;
	
	cout << " What is your height  (inches):";
	cin >> height;
	
	feet = height / 12;
	inches = height % 12;
	
	cout << " you are " << feet << "ft" << inches << " inches" << endl;



	return 0;
}
