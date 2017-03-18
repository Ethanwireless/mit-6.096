// Given a list of N integers, find its mean (as a double), maximum value, minimum value, 
// and range. Your program will first ask for N, the number of integers in the list, which 
// the user will input. Then the user will input N more numbers.

# include <iostream>
using namespace std;
int main() {
	int N;
	cout << "Enter N:\n";
	cin >> N;
	int num1;
	cin >> num1;
	int max = num1;
	int min = num1;
	int range = 0;
	int sum = num1;

	for (int i = 1; i<N; i++){
		int num;
		cin >> num;
		if (num > max) max = num;
		if (num < min) min = num;
		sum += num;
	}

	double mean = sum/N;
	range = max - min;
	cout << "Max: " << max << " Min: " << min << " Mean: " << mean << " Range: " << range;
	return 0;
}