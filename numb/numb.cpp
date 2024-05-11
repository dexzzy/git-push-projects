
// Andrew Alvarea
// Number Comparision

#include <iostream>
using namespace std;

int main()
{
	int num1,num2;
	int greater, less;
	
//ask for numbers

cout << " Enter number 1 :" ;
cin >> num1;

cout << " Enter number 2: " ;
cin >> num2;

// print small number

if (num1 >  num2 )
{
	greater =num1;
	less = num2;
	cout << less << " is less than " << greater << endl;
	}
	
	else if(num1 < num2){
	greater = num2;
	less = num1;
	cout << less << " is less than " << greater << endl;
	}
	
	else{
	cout << " they are both the same numbers. try new numbers" << endl;
	}
	
	









	return 0;
}
