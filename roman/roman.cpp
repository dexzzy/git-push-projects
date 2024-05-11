// Andrew Alvarez
// Roman

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num1;

	cout << " Enter a number   (1-10): ";
	cin >> num1;

	
	switch(num1)
	{
	
	case 1:
	cout << "Your Number is I" << endl;
	break;
	
	case 2:
	cout << " Your Number is II" << endl;
	break;
	
	case 3:
	cout << " Your Number is III" << endl;
	
	case 4:
	cout << " Your Number is IV" << endl;
	break;
	
	case 5:
	cout << " Your Number is V" << endl;
	break;
	
	case 6:
	cout << " Your Number is VI" << endl;
	break;
	
	case 7:
	cout << " Your Number is VII" << endl;
	break;
	
	case 8:
	cout << " Your Number is VIII" << endl;
	break;
	
	case 9:
	cout << " Your Number is IX" << endl;
	break;
	
	case 10:
	cout << " Your Number is X" << endl;
	break;
	
	default:
	cout << " You have entered an Invalid Number" << endl;
	break;
	
	
	}


	return 0;
}
