#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	string a;
	cin >> a;

	int temp[3] = {1,0,0};

	for (int i = 0; i < a.length(); i++) {

		if (a[i] == 'A') {
			int swap = temp[1];
			temp[1] = temp[0];
			temp[0] = swap;
		} else if (a[i] == 'B') {
			int swap = temp[2];
			temp[2] = temp[1];
			temp[1] = swap;
		}else if (a[i] == 'C') {
			int swap = temp[2];
			temp[2] = temp[0];
			temp[0] = swap;
		}
	}

	if (temp[0] == 1) {
		cout << 1 << "\n";
	}else if (temp[1] == 1) {
		cout << 2 << "\n";
	}else if (temp[2] == 1) {
		cout << 3 << "\n";
	}

	return 0;
}