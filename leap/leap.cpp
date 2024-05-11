//andrew alvarez
//leap

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int year;
	cout << " Enter a year  (Ex:2050):";
	cin >> year;
	
	if( year % 4 == 0 ){
		if ( year % 100 == 0 ){
			if ( year % 400 == 0){
			cout << " it is a leap year" << endl;
			}
			else
			{
			cout << " it is not a leap year" << endl;
			}
		}
		else
		{
		cout << " it is a leap year" << endl;
		}
	
	}
	else 
	{
	cout << " year is not a leap year" << endl;
	}

	return 0;
}
