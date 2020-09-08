#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	string a;
	cin >> a;

	int cnt = 1;
	int w = a[0] - 'a';

	for (int i = 1; i < a.length(); i++) {
		if (a[i] - 'a' <= w) {
			cnt += 1;
		}

		w = a[i] - 'a';
	}

	cout << cnt << "\n";


	return 0;
}