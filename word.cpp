#include<iostream>
using namespace std;

int main( )
{
	char str[100];
	
	cout << "Enter a string: ";
	cin.getline(str,100);
	
	int words = 0;
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			words++;
		} 		
	}

	cout << "The number of words = " << words+1 << endl;

	return 0;
}