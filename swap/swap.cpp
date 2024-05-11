#include <iostream>
using namespace std;

void swap(int  &number1, int &number2);

int main()
{
	int number1 = 20; // original values
	int number2 = 30;
	

	cout << " Address of Number1:" << &number1 << endl;
	cout << " Address of Number2:" << &number2 << endl;

	
	cout << " Numbers before swap:" << number1 << " " << number2 << endl;
	//function call
	swap(number1, number2);
	cout << " Number After swap: " << number1 << " " << number2 << endl;
	return 0;

}
void swap (int &number1, int &number2)
{
	cout << " Address of number1: " << &number1 << endl;
	cout << " Address of number2: " << &number2 << endl;
	
	int temp = number1;
	number1 = number2;
	number2 = temp;
} 








