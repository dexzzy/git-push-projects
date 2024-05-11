//Andrew Alvarez
// Flow chart

#include <iostream>
#include <string>
using  namespace std;

int main()
{

	string fever, stuffynose, rash, ear;
	
	cout << "do you have a fever?  (y/n): ";
	cin >> fever;
	
	cout << " do you have a stuffy nose  (y/n): ";
	cin >> stuffynose;
	
	cout << " do you have a rash  (y/n): ";
	cin >> rash;
	
	cout << " do you have a earache  (y/n):";
	cin >> ear;

if( fever == "y")
{
	if( rash == "y")
	{
	cout << " you have measles" << endl;
	}
	else
	{
		if( ear == "y")
		{
			cout << " you have an ear infection" << endl;
		}
		else
		{
			cout << " you have the flu" << endl;
		}
	}

}
else
{
	if( stuffynose == "Y")
	{
		cout << " you have a headcold" << endl;
	}
	else
	{
		cout << " you have hypochondria" << endl;
	}
}





	return 0;
}
