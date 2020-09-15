#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	cin.ignore();

	while (n--) {

		string a;
		getline(cin, a);

		int score = 0;

		for (int i = 0; i < a.length(); i++) {

			if (a[i] != ' ') {
				score += a[i] - 'A' + 1;
			}
			else {
				score += 0;
			}
		}

		if (score == 100) cout << "PERFECT LIFE\n";
		else cout << score << "\n";

	}

	return 0;
}