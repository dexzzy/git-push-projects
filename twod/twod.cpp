#include <iostream>
using namespace std;





int main()
{
const int ROW_SIZE = 3;
const int COL_SIZE = 3;

	int sales[ROW_SIZE][COL_SIZE] = {{2,3,1},{2,1,2},{4,3,3}};
/*	
	sales[0][0] = 245;
	sales[0][1] = 350;
	sales[0][2] = 120;
	
	sales[1][0] = 230;
	sales[1][1] = 190;
	sales[1][2] = 234;
	
	sales[2][0] = 430;
	sales[2][1] = 324;
	sales[2][2] = 392;
*/


	for ( int row =  0; row < ROW_SIZE; row++)
	{
		for(int col = 0; col < COL_SIZE; col++)
		{
			cout << sales[row][col] << " ";
		}
		
		cout << endl;
	}
	return 0;
}
