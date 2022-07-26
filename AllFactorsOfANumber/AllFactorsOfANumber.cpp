#include <iostream>
using namespace std;

int main() {
	int number;
	int i;
	cout << "Enter a number:";
	cin >> number;

	cout << "Factors of " << number << " are: ";
	for (i = 1; i <= number; i++) {
		if (number % i == 0)
			cout << i << "";

	}

	return 0;
}
