#include <iostream>
#include <fstream>
using namespace std;
/*
	references variable references the memory location of another variable.
	 Changes made to the references variable affects the variable that it references.
	  non references parameters duplicate variables ( pass-by- value)
	  pass by value is not practical for derived data types, such as ofstream and ifstream.
	
	
	\
*/

void readData(ifstream &fin);
int main()
{
	ifstream fin;
	readData(fin); // pass by reference
	

	return 0;
}
void readData(ifstream &fin)
{
	int temp;
	fin.open("Numbers.txt");
	while(fin >> temp)
	{
		cout << temp << endl;
	}
	fin.close();
}
