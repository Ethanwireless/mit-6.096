#include <iostream>
using namespace std;

int sumNums(const int nums[], const int numLength){
	//if (numLength == 0) cout << 0;
	if (numLength == 1) return nums[0];
	else return nums[0] + sumNums(nums+1, numLength-1);
}

int main() {
	int nums[] = {1,2,3,4,5};
	cout << sumNums(nums, 5);
	return 0;
}
