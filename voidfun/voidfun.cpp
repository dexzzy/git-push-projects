//andrew alvarez

#include <iostream>
#include<cstdlib>
using namespace std;
 
 //prototypes for void functions
 void  DisplayMenu();
 void Cat();
 void Dog();
 void Cow();
 
 int main()
 {
 	int choice;
 	
 	do
 	{
 		DisplayMenu();
 		cin >> choice;
 		
 		switch(choice)
 		{
 			case 1:
 				Cat();
 				break;
 			case 2:
 				Dog();
 				break;
 			case 3:
 				Cow();
 				break;
 			case 4:
 				cout << " Goodbye" << endl;
 				break;
 			default:
 				cout <<" Enter value 1 to 4 " << endl;
 		}
 		
 		cin.ignore();
 		cout << " Press enter to continue" << endl;
 		cin.get();
 		
 		
 		system("clear");
 		
 	}while(choice != 4);
 	
 	return 0;
 }

void DisplayMenu()
{
	cout << "1. Cat " << endl;
	cout << "2. Dog" << endl;
	cout << "3. Cow"<< endl;
	cout << " 4. Exit" << endl;
	cout << " Enter a value between 1 and 4: " ;
	
	return;
}

void Cat()
{
	cout << " Meow" << endl;
}
void Dog()
{
	cout << " wooof " << endl;
}
void Cow()
{
	cout << " MOOOOO" << endl;
}
