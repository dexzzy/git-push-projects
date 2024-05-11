//Andrew Alvarez
#include <iostream>
using namespace std;

int calculateSum(int num1, int num2, int num3);
int calculateAverage(int num1, int num2, int num3);
int calculateAverage(int); //function overloading - parameters are diff

int main()
{
	int sum, avg1,avg2, num1, num2, num3;
	cout << " Enter three values: ";
	cin >> num1 >> num2 >> num3;
	
	sum = calculateSum(num1, num2, num3); // warning! do not include data types in functions calls
	avg1 = calculateAverage(num1, num2, num3);
	avg2 = calculateAverage(sum);
	
	
	
	cout << " Sum:" << sum << endl;
	cout << "Average1:" << avg1 << endl;
	cout <<" Average2:" << avg2 << endl;
	
	return 0;
	
}
int calculateSum(int x, int y, int z)
{
	return x+y+z;
}
int calculateAverage(int x,int y, int z)
{
	return (x + y + z) / 3;
}
int calculateAverage(int sum)
{
	return sum / 3;
}
