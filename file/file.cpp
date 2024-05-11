#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	string filename;
	string name;
	
	cout << " Enter a File name: ";
	cin >> filename;
	
	fin.open(filename);
	
	if (!fin)
	{
		cout << " file not found " << endl;
		}
		else
		{
		cout << " Open Successfully" << endl;
		while ( fin >> name)
		{
		cout << name << endl;
		}
	}
	fin.close();
	
	return 0;
}
