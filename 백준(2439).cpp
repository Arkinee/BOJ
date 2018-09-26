#include <iostream>
using namespace std;


int main() {

	int N;

	cin >> N;

	if (N < 1 || N > 100) {
		return 0;
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N - i; j++) {
			cout << " ";
		}
		for (int z = 1; z <= i; z++) {
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}