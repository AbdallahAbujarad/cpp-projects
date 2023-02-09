// هل العدد اولي.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main()
{
	bool f = true;
	int x;
	cout << "enter the num : ";
	cin >> x;
	int i = 2;
	if (x == 1) {
		f = 0;
	}
	else {
		while (i <= (x - 1)) {
			if (x % i == 0) {
				f = false;
			}
			i++;
		}
	}
	if (f == false) { cout << "it is not prime"; }
	else { cout << "it is prime"; }
}