// Andrew Alvarez
// FIBO
 
 #include <iostream>
 using namespace std;
 
int main()
{
	int first = 0;
	int second = 1;
	int next;
	int n;
	
	cout << " Enter the number of terms in a fibonacci sequence: ";
	cin >> n;
	
	for (int x = 0; x < n; x++ )
	{
		if ( x <= 1)
		{
			next = x;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		
		cout << next << endl;
	}

	return 0;
}
