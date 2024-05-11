// Andrew Alvarez
// Color mixer

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color1, color2;

	cout << " Choose one primary colors of those listed   ( red,yellow,blue) color1: ";
	cin >> color1;

	cout << " Choose one  primary colors of those listed ( red,yellow,blue) color2: ";
	cin >> color2;
	
	
	if( color1 == "blue" || color1 == "red" &&  color2 == "red" || color2 == "blue" )
	{
		cout <<  " Your color makes purple" ;
	}
	
	else if ( color1 == "yellow" || color1 == "red " && color2 == "red" || color2 == "yellow" )
	{
		cout << " your color makes orange";
	
	}

	else if ( color1 == " yellow" || color1 == "blue" && color2 == "blue" || color2 == "yellow" )
	{
		cout << " your color makes green";
	}

	else{
		cout << " you have entered invalid colors. try again" << endl;
		}

return 0;

	}
