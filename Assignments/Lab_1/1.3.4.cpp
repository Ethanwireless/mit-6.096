// Write a program that loops indefinitely. In each iteration of the loop, read in an integer N 
// (declared as an int) that is inputted by a user, output N5 if N is nonnegative and divisible by 5,
// and -1 otherwise. Use the ternary operator (?:) to accomplish this. (Hint: the modulus operator may be useful.)

/*
# include <iostream>
using namespace std;
int main() {
	while(true){
		int N;
		cout << "Enter N: \n";
		cin >> N;
		cout << ((N>0 && N%5==0) ? N/5 : -1) << endl;
	}
	return 0;
}
*/

// Modify the code from 3.4.1 so that if the condition fails, nothing is printed. Use an if and
// a continue command (instead of the ternary operator) to accomplish this.

/*
# include <iostream>
using namespace std;
int main() {
	while(true){
		int N;
		cout << "Enter N: \n";
		cin >> N;
		if (N>0 && N%5==0) {
			cout << N/5 << endl;
		}
		else
			continue;
	}
	return 0;
}
*/

// Modify the code from 3.4.2 to let the user break out of the loop by entering -1 or any negative number. 
// Before the program exits, output the string “Goodbye!”.
# include <iostream>
using namespace std;
int main() {
	while(true){
		int N;
		cout << "Enter N: \n";
		cin >> N;
		if (N>0 && N%5==0) {
			cout << N/5 << endl;
		}
		else if (N < 0)
			break;
	}
	cout << "“Goodbye!\n";
	return 0;
}


