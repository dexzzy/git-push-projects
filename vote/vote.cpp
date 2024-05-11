//andrew alvarez
// vote

#include <iostream>
#include <string>
using namespace std;

int main()
{

	int age;
	string response;
	
	//ask for age
	
	cout << " How old are you:" ;
	cin >> age;
	
	//ask if you are a citizen
	
	cout << "  Are you a us Citizen? (yes/no): " ;
	cin >> response;
	
	//check if age is valid
	if(age <1 || age > 125){
	cout << "Error: age must be 1 and  125" << endl;
	}
	else if( age >= 18 && response == "yes" )
	{
		cout << " You can vote!" << endl;
	
	}
	else 
	{
	cout << " You may not Vote!" <<endl;
	
	}
	
	

	return 0;
}
