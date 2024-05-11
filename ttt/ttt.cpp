#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void setup(string grid[3][3]);
void display(string grid[3][3]);
bool isMoveValid(string grid[3][3], int row, int col, bool player1);
bool checkWinner(string grid[3][3], bool player1);

int main()
{
	string grid[3][3];
	bool player1 = true;
	bool winner = false;
	bool valid = false;
	int choice;
	setup(grid);
	
	while( winner == false )
	{
		display(grid);
		if(player1 == true)
			cout << " Player 1 enter position: ";
		else
			cout << " Player 2 enter position: ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				valid = isMoveValid(grid,0,0,player1);
				break;
			case 2:
				valid = isMoveValid(grid,0,1,player1);
				break;
			case 3:
				valid = isMoveValid(grid,0,2,player1);
				break;
			case 4:
				valid = isMoveValid(grid,1,0,player1);
				break;
			case 5:
				valid = isMoveValid(grid,1,1,player1);
				break;
			case 6:
				valid = isMoveValid(grid,1,2,player1);
				break;
			case 7:
				valid = isMoveValid(grid,2,0,player1);
				break;
			case 8:
				valid = isMoveValid(grid,2,1,player1);
				break;
			case 9:
				valid = isMoveValid(grid,2,2,player1);
				break;
			default:
				cout << " Enter a value from 1-9! " << endl;
		}
		
		if(valid == true)
		{
			winner = checkWinner(grid,player1);
			if(winner == true)
			{
				display(grid);
				string player = player1 ? " PLAYER1" : "PLAYER 2";
				cout << player << " wins!!!!" << endl;
			}
			else
			{
				player1 = !player1;
			}
		}
	}// gameloop


	return 0;
}
void setup(string grid[3][3])
{
	char counter = '1';
	for( int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			grid[row][col] = counter;
			counter++;
		}
	}

}
void display(string grid[3][3])
{
	system("clear");
	for(int row = 0; row < 3; row++)
	{
		cout << " | ";
		for( int col = 0; col < 3; col++)
		{
			cout << grid[row][col] << " | ";
		}
		cout << endl;
	}
}
bool isMoveValid(string grid[3][3], int row, int col, bool player1)
{
	string token = player1 ? "X" : "O";
	bool valid = false;
	if(grid [row][col] != "X" && grid[row][col] !="O")
	{
		grid[row][col] = token;
		valid = true;
	}
	return valid;
}
bool checkWinner(string grid[3][3], bool player1)
{
	string token= player1 ? "X" : "O";
	bool winner = false;
	
	if(grid[0][0] == token && grid[0][1] == token && grid[0][2] == token)
		winner = true;
	if(grid[1][0] == token && grid[1][1] == token && grid[1][2] == token )
		winner = true;
	if(grid[2][0] == token && grid[2][1] == token && grid[2][2] == token )
		winner = true;
	if(grid[0][0] == token && grid[1][0] == token && grid[2][0] == token )
		winner = true;
	if(grid[0][1] == token && grid[1][1] == token && grid[2][1] == token )
		winner = true;
	if(grid[0][2] == token && grid[1][2] == token && grid[2][2] == token )
		winner = true;
	if(grid[0][0] == token && grid[1][1] == token && grid[2][2] == token )
		winner = true;
	if(grid[0][2] == token && grid[1][1] == token && grid[2][0] == token )
		winner = true;
		
		return winner;
}
