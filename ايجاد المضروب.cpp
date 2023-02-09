#include <iostream>
using namespace std;



int main()
{
	int fact = 1, n = 1, a;
	cout << "enter the number : ";
	cin >> a;
	
	while (n <= a){
		cout << n << ". " << fact*n << endl << endl;
		fact *= n;
		n++;
	}
	cout << endl << "factorial = " << fact;
}