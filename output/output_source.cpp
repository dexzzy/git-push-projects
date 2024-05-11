#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("Names.txt");
	string temp;
/*
	fin >> temp;
	cout << temp;
	
	
	fin >> temp;
	cout << temp;
	
	fin >> temp;
	cout << temp;
	*/
	
	while( fin >> temp )
	{
		cout << temp << endl;
	
	} 
	
	fin.close();
	return 0;
}
