#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	if (n == 1){
		cout << 1 << "\n";
		return 0;
	}

	int a = 1;
	int sum = 1;

	while (true) {

		int temp = sum + 6 * a;

		if (temp >= n) {
			cout << a + 1 << "\n";
			break;
		}

		a += 1;
		sum = temp;

	}

	return 0;
}