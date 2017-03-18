# include <iostream>

using namespace std;

void printArray(const int arr[], const int length) {
	int i = 0;
	for (; i < length - 1; i++) {
		cout << arr[i] << ", ";
	}
	cout << arr[i];
}

void reverse(int arr[], const int length) {
	for (int i = 0; i < length / 2; i++) {
		int tmp = arr[i];
		int indexFromEnd = length - i - 1;
		// arr[i] = arr[indexFromEnd];
		*(arr+i) = *(arr+indexFromEnd);
		// arr[indexFromEnd] = tmp;
		*(arr+indexFromEnd) = tmp;
	}
}

void transpose(const int input[][LENGTH], int output[][WIDTH]){
	for (int i=0; i<LENGTH/2; i++){
		for (int j=0; j<WIDTH/2; j++){
			output[i][j] = input[j][i];
		}
	}
}

int main() {
	return 0;
}
