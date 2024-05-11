
//Andrew Alvarez
//Movie

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int moviesrented;
	string pointsEarned = " ";
	
	cout << "How many movies have you rented this month: " ;
	cin >> moviesrented;
	
	if( moviesrented <= 0 )
		{
		pointsEarned = " 0 ";
		}
	else if( moviesrented <= 1 )
		{
		pointsEarned = " 50";
		}
	else if  ( moviesrented <= 2 )
		{
		pointsEarned = " 150 ";
		}
	else if  ( moviesrented <= 3 )	
		{
		pointsEarned = " 300 ";
		}
	 else 
		{
		pointsEarned = " 600 ";
		}
//Output

cout << "Total pointsEarned" <<pointsEarned <<endl;



	return 0;
}
