#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	string word;
	cin >> word;

	vector<char>temp;
	int cnt[26] = { 0 };

	for (char c : word) {
		temp.push_back(c);
	}

	sort(temp.begin(), temp.end());

	for (char c : temp) {
		cnt[c - 'A'] += 1;
	}

	string result = "";
	int odd = 0;
	int oddIdx = 0;
	for (int i = 0; i < 26; i++) {

		if (cnt[i] == 0) continue;

		if (cnt[i] % 2 == 1) {
			odd += 1;
			oddIdx = i;
			if (odd > 1) {
				cout << "I'm Sorry Hansoo" << "\n";
				return 0;
			}

			if (odd == 1) {
				for (int j = 0; j < cnt[i] / 2; j++) {
					result += 'A' + i;
				}
			}

			continue;
		}
		else {
			for (int j = 0; j < cnt[i] / 2; j++) {
				result += 'A' + i;
			}

		}
	}

	if (odd == 1) {
		result += 'A' + oddIdx;
	}


	int size = result.size() - 1;

	if (odd == 1) {
		size -= 1;
	}

	for (int i = size; i >= 0; i--) {
		result += result[i];
	}

	cout << result << "\n";

	return 0;
}