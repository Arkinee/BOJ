#include <iostream>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int sum = 0;
	string a;
	cin >> a;

	for (int i = 0; i < a.length(); i++) {

		if (a[i] == 'c') {
			
			if (i != a.length() - 1) {
				if (a[i + 1] == '=') {
					sum += 1;
					i += 1;
					continue;
				}
				else if (a[i + 1] == '-') {
					sum += 1;
					i += 1;
					continue;
				}
				else {
					sum += 1;
					continue;
				}
			}

			sum += 1;

		}
		else if (a[i] == 'd') {

			if (i != a.length() - 1) {

				if (a[i + 1] == 'z') {

					if (i != a.length() - 2 && a[i + 2] == '=') {
						sum += 1;
						i += 2;
						continue;
					}

					sum += 2;
					i += 1;
					continue;

				}
				else if (a[i + 1] == '-') {
					sum += 1;
					i += 1;
					continue;
				}

			}

			sum += 1;

		}
		else if (a[i] == 'l') {
			if (i != a.length() - 1) {

				if (a[i + 1] == 'j') {
					sum += 1;
					i += 1;
					continue;
				}

			}
			sum += 1;
		}
		else if (a[i] == 'n') {
			if (i != a.length() - 1) {

				if (a[i + 1] == 'j') {
					sum += 1;
					i += 1;
					continue;
				}

			}
			sum += 1;
		}
		else if (a[i] == 's') {
			if (i != a.length() - 1) {
				if (a[i + 1] == '=') {
					sum += 1;
					i += 1;
					continue;
				}
			}

			sum += 1;
		}
		else if (a[i] == 'z') {
			if (i != a.length() - 1) {
				if (a[i + 1] == '=') {
					sum += 1;
					i += 1;
					continue;
				}
			}

			sum += 1;
		}
		else {
			sum += 1;
		}

	}

	cout << sum << "\n";


	return 0;
}