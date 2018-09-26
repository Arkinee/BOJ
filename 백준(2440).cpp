#include <iostream>
using namespace std;


int main() {

	int N;

	cin >> N;

	if (N < 1 || N > 100) {
		return 0;
	}

	for (int i = 0; i < N; i++) {
		
		for (int z = 0; z < N-i ; z++) {
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}