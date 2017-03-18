# include <iostream>
// 4.2.1
// template <typename T>
// T min(const T a, const T b) {
// 	return a < b ? a : b;
// }

// 4.2.2
#define min(x, y) (x < y ? x : y)

int main() {
	std::cout << min('a', 'b') << std::endl; 
}