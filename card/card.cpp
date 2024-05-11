#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct MagicCard
{
	string cardName;
	string type;
	string subtype;
	int power;
	int toughness;

};

void LoadCards( MagicCard cards[], int size);
void DisplayCards( MagicCard cards[], int size);

int main()
{
 	const int SIZE  = 3;
	MagicCard cards[SIZE];
	LoadCards( cards, SIZE);
	DisplayCards(cards, SIZE);
	return 0;
}

void LoadCards( MagicCard cards[], int size)
{
	ifstream fin;
	fin.open("cards.txt");
	
	for( int x = 0; x < size; x++ )
	{
		getline(fin, cards[x].cardName);
		getline(fin,cards[x]. type);
		getline(fin,cards[x].subtype);
		
		fin >> cards[x].power;
		fin >> cards[x].toughness;
		
		fin.ignore();
	}
	fin.close();

}

void DisplayCards(MagicCard cards[], int size)
{
 for ( int x = 0; x < size; x++ )
 {
 	cout << " name: " << cards[x].cardName << endl;
 	cout << " type: " << cards[x].type << endl;
 	cout << " Subtype: " << cards[x].subtype << endl;
 	cout << " Power: " << cards[x].power << endl;
 	cout << "Toughness: " << cards[x].toughness << endl;
 }
 
}
