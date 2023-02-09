#include <iostream>
using namespace std;

int main() {

	const int size = 5;
	int ar[size],i;

	for (i = 0;i < size;i++) {
		cin >> ar[i];
	}

	for (i = size - 1;i >= 0;i--) {
		cout << ar[i] << " ";
	}

	return 0;
}