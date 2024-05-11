#include<iostream>
#include<fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{

	string name = "";
	string phone = "";
	ofstream fout;
	ifstream fin;
	
	int choice;
	
	do {
		cout << " Contact List" << endl;
		cout << "  ==============" << endl;
		cout << " 1) Display Contacts " << endl;
		cout << " 2) Add Contacts " << endl;
		cout << " 3) Exit " << endl;
		cout << " Enter a choice [1-3]: " ;
		cin >> choice;
		
		switch ( choice)
		{
		case 1:
			system("cis");
			name = "";
			phone = "";
			fin.open("Contacts.txt");
			
			if(!fin)
			{
				fout.open("Contacts.txt");
				fout.close();
			}
			while ( fin >> name)
			{
				cout << " ============" << endl;
				cout << " Name: << name << endl;
				fin >> phone;
				cout << " Phone: " << phone << endl;
				cout << " ===============" << endl;
			}
			cin.ignore();
			cin.get();
			system("cls");
			fin.close();
			break;
			
			case 2:
				system("cls");
				
				cout << "Enter name: ";
				cin >> name;
				cout << " Enter phone: ";
				cin >> phone;
				
				fout.open("Contacts.txt" , ios::app);
				fout << name << endl;
				fout << phone << endl;
				
				fout.close();
				system("cls");
				break;
			}
			
			
			} while ( choice != 3);
			cout << " Goodbye !" << endl;
			system(" pause" );
			return 0;
			
			}
