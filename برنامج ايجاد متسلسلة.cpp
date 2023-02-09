
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "enter the last n in this series = 1/n^2 : ";
	cin >> a;
	int n = 1;
	double sum = 0;
	double x = 1;

	if (a >= 0) {
		
		while (n <= a) {
			x = n*n ;
			sum = sum + (1 / x);
			n++;
			cout << 1/x << endl;
		}

		cout << endl;
		cout << "sum = " << sum;

	}
}
