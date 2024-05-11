#include <iostream>
#include<string>
using namespace std;

int LinearSearch(string names[], int LENGTH, string SearchValue);


int main()
{
	const int LENGTH = 5;
	string names[] = {"TOM","BOB","MARY","PAUL","NEO"};
	string SearchValue;
	int result; // holds the value return by linear search
	
	cout << " Enter name in the list: ";
	cin >> SearchValue;

	/*
		if the function when it is called returns -1 than nothing has been found
		otherwise, it will return the position.
	*/
	
	result = LinearSearch(names,LENGTH,SearchValue);
	
	if(result == -1 )
	{
		cout <<  SearchValue << " Not Found" << endl;
	}
	else
	{
		cout << SearchValue << " is in position" << result << endl;
	}
	
	return 0;
}
int LinearSearch(string names[], int LENGTH, string SearchValue)
{
	int index = 0;
	int position = -1; // set to negative until value is found
	bool found = false;

	//search array while searchvalue not found
	//and index is  less than length

	while( index < LENGTH && found == false)
	{
		if(names[index] == SearchValue)
		{
			found = true; // this will break loop
			position = index;
		}
		index++;
	}
	// if -1 is returned then the value not found
	return position;
}

