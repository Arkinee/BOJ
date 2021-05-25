#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int n, n1, n2;
	cin >> n;

	int temp;
	int sum = 0;
	
	for (int i = 1; ; i++) {

		sum += i;
		if (n <= sum) {
			temp = i;
			break;
		}

	}

	if (temp % 2 == 0) { // ¦

		n1 = temp - (sum - n);
		n2 = 1 + (sum - n);

	}
	else {	// Ȧ

		n1 = 1 + (sum - n);
		n2 = temp - (sum - n);

	}

	cout << n1 << "/" << n2 << "\n";


	return 0;
}