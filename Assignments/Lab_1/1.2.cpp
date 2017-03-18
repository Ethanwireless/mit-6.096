// Write a program that outputs “Hello, World!” by printing a const char * with value “Hello, World!”.
# include <iostream>
using namespace std;
int main () {
	const char * str = "Hello, World!";

	cout << "For loop" << '\n';
	for (int i = 0; i<10; i++){
		cout << str << endl;
	}

	cout << "While loop" << '\n';
	int j = 10;
	while (j > 0){
		cout << str << endl;
		j--;
	}

	cout << "Do While loop" << '\n';
	int k = 10;
	do {
		cout << str << endl;
		k--;
	}
	while (k > 0);

	return 0;
}