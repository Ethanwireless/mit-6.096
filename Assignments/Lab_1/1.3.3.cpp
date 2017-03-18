// Write a program to read a number N from the user and then find the first N primes. 
// A prime number is a number that only has two divisors, one and itself.

# include <iostream>
using namespace std;
int main() {
	int N;
	cout << "Enter N:\n";
	cin >> N;
	// iterate through all the numbers smaller than N
	for (int num = 2; num < N; num++){

		// check if the number is prime
		bool isPrime = true;
		for (int divisor = 2; divisor < num; divisor++){
			if (num % divisor == 0){
				isPrime = false;
				break;
			}
		}
		if (isPrime) cout << num << endl;
	}
	return 0;
}