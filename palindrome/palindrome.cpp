#include <iostream>
using namespace std;

bool isPalindrome(string word);

int main()
{
	string word;

	cout <<" Enter a word ( lowercase): ";
	cin >> word;
	
	if ( isPalindrome(word) == true)
	{
		cout << word << " is a palindrome! " << endl;
	}
	else
	{
		cout << word << " is not a palindrome" << endl;
	}
	

	
	return 0;
}
	bool isPalindrome ( string word)
	{
		int first = 0;
		int last = word.length() - 1;
		
		while(first < last)
		{
			if (word[first] != word[last])
			{
				return false;
			}
			else
			{
				first++;
				last--;
			}		
		}
			return true;
	}
