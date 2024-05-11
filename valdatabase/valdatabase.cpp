#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct AgentDatabase   // used to group my variables in one place
{
	string AgentName;
	string Class;
	string Playstyle;
	string Difficulty;
	string SkillDistribution;

};

void LoadAgents( AgentDatabase profile[], int size);  // it is my return function to be called , but not return a value
void DisplayAgents( AgentDatabase profile[], int size); // return function to be called and not return a value

int main() // start point of  my program
{
	const int SIZE = 24;  //  declaring a constant value for my array
	AgentDatabase profile[SIZE]; 
	LoadAgents(profile, SIZE);
	DisplayAgents(profile, SIZE);

	return 0;
}

void LoadAgents(AgentDatabase profile[], int size)
{
	ifstream fin;  //  CREATING MY FILE TXT
	fin.open("profile.txt");

	for(int x = 0; x < size; x++) //loop intialization
	{
		getline(fin, profile[x].AgentName);
		getline(fin, profile[x].Class);
		getline(fin, profile[x].Playstyle);
		getline(fin, profile[x].Difficulty);
		getline(fin, profile[x]. SkillDistribution);
	
		fin.ignore();
	}
	fin.close(); // closing txt file

}
void DisplayAgents( AgentDatabase profile[], int size)
{
	for(int x = 0; x < size; x++)
	{
		cout << " Agent Name: " << profile[x].AgentName << endl; // our cout is display message and the rest of the code is  enter data for our array for that such as agent name or class , and etc
		cout << " Class: " << profile[x].Class << endl;
		cout << " Playstyle: " << profile[x].Playstyle << endl;
		cout << " Difficulty: " << profile[x].Difficulty << endl;
		cout << " Skill Distribution: " << profile[x].SkillDistribution << endl;
	
	}

}

