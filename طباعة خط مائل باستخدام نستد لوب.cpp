#include <iostream>
using namespace std;


int main()
{
	cout << "enter the length of the line : ";
	int l;
	cin >> l;
	cout << endl << endl << endl;
	for (int x = 1; x <= l; x++)
	{
		
		
		for (int y = 1; y <= l; y++)
		{

			if (x == y) { cout << "*"; }


			else { cout << "  "; }
		}cout << endl;
	}cout << endl << endl << endl;
}