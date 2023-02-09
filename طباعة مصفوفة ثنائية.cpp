
#include <iostream>
using namespace std;

int main()
{
	const int width = 4, length = 3;
	int ar[width][length];
	cout << "enter " << width * length << " numbers : ";
	for (size_t i = 0; i < width; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			cin >> ar[i][j];
		}
	}
	for (size_t i = 0; i < width; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
