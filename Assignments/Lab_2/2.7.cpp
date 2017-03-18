# include <iostream>

using namespace std;

/*
// 2.7.1
int getLength(char *str){
	int count = 0;
	while (*(str+count) != '\0') count++;
	return count;
}

// 2.7.2
void swapReference(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

// 2.7.3
void swapByPointer(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

// 2.7.4
void swapPointer(int **x, int **y){
	int *temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int x = 1, y = 2;
	int *ptr1 = &x, *ptr2 = &y;
	swapPointer(&ptr1, &ptr2);
	cout << *ptr1 << endl << *ptr2 << endl;
	return 0;
}
*/

// 2.7.5
int main() {
	char *oddOrEven = "Never odd or even";

	// Create a pointer to a char value named nthCharPtr pointing to the 6th character 
	// of oddOrEven (remember that the first item has index 0). Use the indexing operator.
	char *nthCharPtr = &oddOrEven[5];

	// Usingpointerarithmetic,update nthCharPtr to point to the 4th character in oddOrEven.
	nthCharPtr -= 2;

	// Print the value currently pointed to by nthCharPtr.
	cout << *nthCharPtr << endl;

	// Create a new pointer to a pointer (a char **) named pointerPtr that points to nthCharPtr.
	char **pointerPtr = &nthCharPtr;

	// Print the value stored in pointerPtr.
	cout << pointerPtr << endl;

	// Using pointerPtr, print the value pointed to by nthCharPtr.
	cout << **pointerPtr << endl;

	// Update nthCharPtr to point to the next character in oddOrEven 
	// (i.e. one character past the location it currently points to).
	nthCharPtr += 1;

	// Using pointer arithmetic, print out how far away from the character 
	// currently pointed to by nthCharPtr is from the start of the string.
	cout << nthCharPtr - oddOrEven << endl;

	return 0;
}























