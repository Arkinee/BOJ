#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int count = 0;

	int left = 1;
	int right = 2;
	int cur = 3;

	if (n == 1 || n == 2) cout << 1 << "\n";
	else {

		while (right <= n) {

			if (right == n) {
				count += 1;
				break;
			}

			if (cur < n) {
				right += 1;
				cur += right;
			}
			else if (cur == n) {
				count += 1;
				cur -= left;
				left += 1;
				right += 1;
				cur += right;
			}
			else {
				cur -= left;
				left += 1;
			}
		}


		cout << count << "\n";
	}

	return 0;
}