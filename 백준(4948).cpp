#include <iostream>
using namespace std;

int main() {

	int n = 1;


	while (n != 0) {

		cin >> n;
		if (n == 0) {
			return 0;
		}

		int cnt = 0;


		bool prime;
		for (int i = n + 1; i <= 2 * n; i++) {
			prime = true;
			for (int d = 2; d * d <= i; d++) {
				if (i % d == 0) {
					prime = false;
					break;
				}
			}
			
			if (prime) {
				cnt++;
			}

		}
		cout << cnt << endl;
	}
	
	return 0;
}