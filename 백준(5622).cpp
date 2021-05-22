#include<iostream>
#include<string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	string word;
	cin >> word;

	int sum = 0;
	for (int i = 0; i < word.length(); i++) {

		int temp = word[i] - 'A';

		if (0 <= temp && temp <= 2) {
			sum += 3;
		}
		else if (3 <= temp && temp <= 5) {
			sum += 4;
		}
		else if (6 <= temp && temp <= 8) {
			sum += 5;
		}
		else if (9 <= temp && temp <= 11) {
			sum += 6;
		}
		else if (12 <= temp && temp <= 14) {
			sum += 7;
		}
		else if (15 <= temp && temp <= 18) {
			sum += 8;
		}
		else if (19 <= temp && temp <= 21) {
			sum += 9;
		}
		else if (22 <= temp && temp <= 25) {
			sum += 10;
		}

	}

	cout << sum << "\n";

	return 0;
}