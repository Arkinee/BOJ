#include <iostream>
#include <string>

using namespace std;

int main() {
	string word, find;
	cin >> word;
	cin >> find;

	string temp = "";
	for (int i = 0; i < word.length(); i++) {
		if (word[i] - '0' >= 0 && word[i] - '0' <= 9) {
			continue;
		}
		else {
			temp += word[i];
		}
	}

	bool answer = false;
	for (int i = 0; i < temp.length(); i++) {

		if (temp[i] == find[0]) {
			for (int j = 0; j < find.length(); j++) {
				if (temp[i + j] == find[j]) {

					if (j == find.length() - 1) {
						answer = true;
					}
					else {
						continue;
					}
				}
			}

			if (answer) break;

		}
	}

	if (answer) cout << 1 << "\n";
	else cout << 0 << "\n";

	return 0;
}
