#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string make(int n) {

	string result = "";

	while (n > 1) {
		if (n % 2 == 1) {
			result += '1';
		}
		else {
			result += '0';
		}

		n /= 2;
	}

	result += '1';

	return result;
}

int main() {

	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;

		string result = make(n);
		for (int i = 0; i < result.length(); i++) {
			if (result[i] == '1') {
				cout << i << " ";
			}
		}

	}

	cout << "\n";

	return 0;
}