#include <iostream>
using namespace std;


int main()
{
	for (int x = 1; x <= 10; x++)
	{
		cout << "jadwal el " << "(" <<x<<") ";
		for (int y = 1; y <= 10; y++)
		{
			cout << x * y << " ";
		}cout << endl;
	};
}
