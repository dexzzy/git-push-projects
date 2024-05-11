// Andrew Alvarez
// Age Group

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age;
	string ageGroup = "";
	
	cout << "Enter your age: ";
	cin >> age;

	if( age >= 65 )
	{
	
	ageGroup = " senior citizen";


	}
	else if ( age >= 18)
	{
	
	ageGroup = " Adult";
	
	}
	else if ( age >= 13 ){
	
	ageGroup = " Teenager";
	
	
	}
	
	else if ( age >= 1 )
	{
	ageGroup = " Child";
	}
	else
	{
		ageGroup = " Infant";
		}
	
	//output
	cout << " You are a " << ageGroup << endl;
	
	
	
	
	return 0;
}
