#include <iostream>
using namespace std;

int combination(int n, int k);

int main() {

	int n;
	int k;

	cin >> n >> k;

	if (n < 1 || n > 10) return -1;
	if (k < 0 || k > n) return -1;

	cout << combination(n, k);


	return 0;
}

int combination(int n, int k) {
	
	int result;

	if (n == k || k == 0) {
		result = 1;
	}
	else {

		result = combination(n - 1, k) + combination(n - 1, k - 1);

	}
	
	return result;
}