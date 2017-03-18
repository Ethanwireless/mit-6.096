
#include <iostream>

using namespace std;

int main() {
	short number;
	cout << "Enter a number: ";
	cin >> number;

	if (number < 0) {
		cout << "Invalid!\n";
	}
	else {
		cout << "The factorial of " << number << " is ";
		long accumulator = 1;
		for (; number > 0; accumulator *= number--);
		cout << accumulator << ".\n";
	}
	return 0;
}