
// Andrew Alvarez
//Power

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
	1.) Perfom math functions
	2) while loop
	3)format outspot usig name


*/

int main()
{
		// Powers of 10
		
		cout << " Power of 10" << " = " << " Standard Format" << endl;
		cout << " =================================================" << endl;
		
		int exponent = 0;
		
		
		while( exponent < 11 )
		{
			cout << left << fixed << setprecision(2);
			cout << "10^" << setw(9) << exponent << " = " << setw(15) << pow(10,exponent) << endl;
			exponent++;
		}

	return 0;	
}
