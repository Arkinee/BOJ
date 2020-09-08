#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int n, m, k; //���ο�, ������, reform��

	do {
		cin >> n >> m >> k;	//���ο�, ������, reform��

		if (n == 0 && m == 0 && k == 0) continue;

		int goal = n / 2 + 1;

		if (goal <= m) {
			cout << 0 << "\n";
			continue;
		}

		if (goal - m > n - m - k) {
			cout << -1 << "\n";
		}
		else {
			cout << goal - m << "\n";
		}

	} while (n != 0 && m != 0 && k != 0);

	return 0;
}