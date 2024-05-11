// Andrew Alvarez
// While

#include <iostream>
using namespace std;

/*
	parts of a loop
	1) declare a control variable
	2) intialize control variable
	3) construct a condition
	4) use loop
	5) increment control varible
*/

int main()
{
	//step 1
	int counter = 0;//step 2

	while(counter < 101 )//step 3
	{
		//step4
		cout << " Counter: " << counter << endl;
		//step 5
		
		counter++; //counter = counter + 1;  counter += 1;
	}





	return 0;
}
