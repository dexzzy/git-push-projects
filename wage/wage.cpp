// Andrew Alvarez
// Wage Calculator

#include <iostream>
using namespace std;

int main()
{
// create variables
double wage, hours, rate;

//input hours
cout << "enter the hours:";
cin >> hours;


cout<< "enter the rate:";
cin >> rate;

//calculate the wage
wage = hours * rate;

//display the wage (output)

cout << "wage: $ " << wage << endl;


	return 0;
}
