#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	ifstream.fin;
	fin.open("Names.txt");
	string temp;
	
	while ( fin >> temp )
	{
		cout << temp << endl;
	
	}

	fin.close();

	return 0;
	
	}
