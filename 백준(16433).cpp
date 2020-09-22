#include <iostream>
#include <string>
using namespace std;

string garden[2] = { "", "" };

int main() {

	ios_base::sync_with_stdio(false);

	int n, r, c;
	cin >> n >> r >> c;
	
	if (c % 2 == 1) {
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				garden[0] += 'v';
			}
			else {
				garden[0] += '.';
			}
		}

		for (int i = 0; i < n; i++) {
			if (i % 2 == 1) {
				garden[1] += 'v';
			}
			else {
				garden[1] += '.';
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				garden[0] += '.';
			}
			else {
				garden[0] += 'v';
			}
		}

		for (int i = 0; i < n; i++) {
			if (i % 2 == 1) {
				garden[1] += '.';
			}
			else {
				garden[1] += 'v';
			}
		}
	}

	if (r % 2 == 0) {
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) cout << garden[1] << "\n";
			else cout << garden[0] << "\n";
		}
	}else{
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) cout << garden[0] << "\n";
			else cout << garden[1] << "\n";
		}
	}

	return 0;
}