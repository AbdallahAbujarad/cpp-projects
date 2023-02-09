#include <iostream>
using namespace std;
int main() {
int n;
cout << "enter the tall of one triangle : ";
cin >> n;
for (int x = 1; x <= n; x++)
{
	for (size_t y = 1; y <= n; y++)
	{
		if (y >= x) { cout << "*"; }
	}cout << endl;

}

for (int x = 1; x <= n; x++)
{
	for (size_t y = 1; y <= n; y++)
	{
		if (y <= x) { cout << "*"; }
	}cout << endl;

}


}