#include <iostream>
#include<fstream>
using namespace std;

int main()
{

	 ofstream fout;
	 fout.open("Names.txt");
	 
	 fout << " James" << endl;
	 fout << " Nick" << endl;
	 fout << " Sonic" << endl;
	 fout.close();
	 
	 











	return 0;
}
