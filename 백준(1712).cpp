#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	if (c <= b) {
		cout << -1 << "\n";
		return 0;
	}

	int cnt = a / (c - b) + 1;

	cout << cnt << "\n";

	return 0;
}