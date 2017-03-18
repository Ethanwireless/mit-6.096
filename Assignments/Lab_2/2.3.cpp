// # include <iostream>
// void printNum(int x);
// int main(){
// 	printNum(35);
// 	return 0;
// }
// void printNum(int number) {std::cout << number;}

/* 2.3.4
#include <iostream>

void doubleNumber(int &num) {num = num * 2;}

int main() {
	int num = 35;
	doubleNumber(num);
	std::cout << num; // Should print 70 return 0;
}
*/
#include <iostream>

void doubleNumber(int *num) {*num = *num * 2;}

int main() {
	int num = 35;
	doubleNumber(&num);
	std::cout << num; // Should print 70 return 0;
}


// #include <iostream>
// const int ARRAY_LEN = 10;

// int main() {
// 	int arr[ARRAY_LEN] = {10}; // Note implicit initialization of other elements
// 	int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1;
// 	std::cout << *xPtr << ' ' << *yPtr; // Should output 10 0 return 0;
// }
