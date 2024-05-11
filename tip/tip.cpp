// Andrew Alvarez
// Tip Calculator

#include <iostream>

using namespace std;

int main()
{
const double TAX_RATE = .0825;
double subtotal, tax, total;

//ask for subtotal
cout << " enter the amount before taxes";
cin >> subtotal;

//calculate tax and total

tax = subtotal * TAX_RATE;
total = subtotal + tax;

//display the tax, total, and suggested tip amounts

cout << "TAX: " << tax << endl;
cout << "Total:" << total << endl;


//tip amounts

cout << "15% Tip: " << total * .15 << endl;
cout << "18% Tip: " << total * .18 << endl;
cout << "20% Tip: " << total * .20 << endl;

return 0;
}
