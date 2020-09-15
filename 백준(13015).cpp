#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int n;
	char star[100][500];
	cin >> n;

	for (int i = 0; i <= n - 1; i++) {
		for (int j = 0; j < 4 * n - 3; j++) {
			star[i][j] = ' ';
		}
	}

	for (int i = 0; i <= (2 * n - 1) / 2; i++) {
		star[i][i] = '*';
		star[i][i + (n - 1)] = '*';
		star[i][3 * (n - 1) - i] = '*';
		star[i][4 * (n - 1) - i] = '*';
	}

	for (int i = 1; i < n - 1; i++) {
		star[0][i] = '*';
	}

	for (int i = 3 * n - 3; i < 4 * n - 1; i++) {
		star[0][i] = '*';
	}

	for (int i = 0; i <= (2 * n - 1) / 2; i++) {
		int cnt = 0;
		for (int j = 0; j < 4 * n - 3; j++) {
			if( i != 0 && star[i][j] == '*') cnt += 1;
			cout << star[i][j];
			if (cnt == 4) break;
			if (i == (2 * n - 1) / 2 && cnt == 3) break;
		}
		cnt = 0;
		cout << "\n";
	}

	for (int i = n - 2; i >= 0; i--) {
		int cnt = 0;
		for (int j = 0; j < 4 * n - 3; j++) {
			if (i != 0 && star[i][j] == '*') cnt += 1;
			cout << star[i][j];
			if (cnt == 4) break;
		}
		cnt = 0;
		cout << "\n";
	}

	return 0;
}