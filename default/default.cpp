#include <iostream>
using namespace std;

void printBars( int bar = 10)
{
	for( int x = 0; x < bar; x++)
	{
		cout << "*";
	}
	cout << endl;

}
int main()
{
	printBars(20);
	return 0;
}
