#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string change(int num) {

	string result = "00000000";
	for (int i = 1; num > 0; i++) {
		int binary = num % 2;
		if (binary) {
			result[8 - i] = '1';
		}
		else {
			result[8 - i] = '0';
		}
		num /= 2;
	}

	return result;
}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string word = "00000000";
	string word_shift = "00000000";

	while (n--) {

		int a;
		cin >> a;

		string c = change(a);
		for (int i = 7; i >= 0; i--) {

			if(i != 7) word_shift[i] = word[i + 1];

			if (c[i] == '1') {

				if (word_shift[i] == '1') {
					word[i] = '0';
				}
				else {
					word[i] = '1';
				}

			}
			else if (c[i] == '0') {

				if (word_shift[i] == '1') {
					word[i] = '1';
				}
				else {
					word[i] = '0';
				}

			}

		}

		int result = 0;

		for (int i = 0; i < 8; i++) {
			result += pow(2,i) * (word[7-i] - '0');
		}

		cout << result << " ";
	}

	return 0;
}