#include <iostream>
#include <string>
using namespace std;

void DisplayHeader();
void Display(string movies[],int earnings[], int SIZE);


int main()
{
	const int SIZE = 10;
	string movies[SIZE]= {
	"Surviving Christmas","Jurassic World",
	"The Avengers","The Pandorum",
	"Avengers: Endgames","Godzilla 2000",
	"StarWars: The Last Jedi",
	"Scoob!","Antitrust","The Fate of the Furious"
	};

	int earnings[SIZE];

	DisplayHeader();

	Display(movies,earnings,SIZE);
	

	cout << " Movies Earning more than $150,000,000:" << endl;
	cout << " -------------------------------------:" << endl;
		for(int movie; movie < SIZE; movie++)
		{
			if(earnings[movie] > 150000000)
			{
				cout << movies[movie] << " -->" << earnings[movie] << endl;
			}
		}
		return 0;
}

void DisplayHeader()
{
	cout << "  COSC 1436 - Fundamentals of Programming:" << endl;
	cout << " Exam III                     4/22/24:" << endl;
	cout <<"  Name: Andrew Alvarez: " << endl;
}
void Display(string movies[], int earnings[], int SIZE)
{
	for(int movie = 0; movie < SIZE; movie++ )
		{
			cout << " Enter the earnings for " << movies[movie] << ": ";
			cin >> earnings[movie];
		}
}

