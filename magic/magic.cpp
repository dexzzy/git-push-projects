// Andrew Alvarez
// Magic

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	/*
	
	Generate a random number
	get a line of input from the user
	calculate the remainder
	switch statement
	
	*/
	
	string question;
	srand(time(0));
	int random = rand() % 20 + 1; // Generate value between 1 and 20
	
	cout << " Enter a question for the magic 8 ball: ";
	getline(cin, question);
	
	cout << question << endl;
	//cout << random << endl;
	
	switch(random)
	{
		case 1:
		cout << "It is certain." << endl;
		break;
		
		case 2:
		cout << " It is decidely so." << endl;
		break;
		
		case 3:
		cout << "Without a doubt." << endl;
		break;
		
		case 4:
		cout << " Yes - Definitely" << endl;
		break;
		
		case 5:
		cout << " You may rely on it" << endl;
		break;
		
		case 6:
		cout << " As I see it, yes." << endl;
		break;
		
		case 7:
		cout << " Most Likely." << endl;
		break;
		
		case 8:
		cout << " Outlook good" << endl;
		break;
		
		case 9:
		cout << "yes" << endl;
		break;
		
		case 10:
		cout << " Signs point to yes." << endl;
		break;
		
		case 11:
		cout << " Reply is hazy, try again" << endl;
		break;
		
		case 12:
		cout << " Ask again later" << endl;
		break;
		
		case 13:
		cout << " Better not tell you now " << endl;
		break;
		
		case 14:
		cout << " Cannot predict now" << endl;
		break;
		
		case 15:
		cout << " Concentrate and ask again" << endl;
		break;
		
		case 16:
		cout << " Dont count on it" << endl;
		break;
		
		case 17:
		cout << " My reply is no " << endl;
		break;
		
		case 18:
		cout << " My sources say no" << endl;
		break;
		
		case 19:
		cout << " Outlook not so good" << endl;
		break;
		
		case 20:
		cout << " Very Doubtful" << endl;
		break;
	}



	return 0;
}
