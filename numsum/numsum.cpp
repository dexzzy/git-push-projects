//andrew alvarez
// numbersum

#include <iostream>
using namespace std;

int main()
{
	int num;
	int total;
	
	do
	{	
	
	cout << " Enter a number: ";
	cin >> num;
	
	
	}while(num < 1);
	for ( int x = 0; x < num; x++ )
	{
		cout << x << endl;
		total = total + x;
	} 
	cout << total << endl;
	return 0;
}
