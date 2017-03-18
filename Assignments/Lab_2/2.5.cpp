# include <iostream>
# include <cstdlib>
# include <ctime>
# include <cmath>

using namespace std;

double getPi (int nTimes) {
	srand(time(0));
	int inCount = 0;

	for (int i = 0; i < nTimes; i++) {
		double randX = rand() / double(RAND_MAX);
		double randY = rand() / double(RAND_MAX);
		if (pow(randX, 2) + pow(randY, 2) < 1) inCount ++;
	}

	return 4*inCount/double(nTimes);
}

int main() {
	cout << getPi(5000000) << endl;
	return 0;
}
