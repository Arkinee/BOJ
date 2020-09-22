#include <iostream>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	string a, b;
	cin >> a;
	cin >> b;


	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '1' && b[i] == '1') cout << 1;
		else cout << 0;
	}

	cout << "\n";

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '1' || b[i] == '1') cout << 1;
		else cout << 0;
	}

	cout << "\n";

	for (int i = 0; i < a.length(); i++) {
		if (a[i] != b[i] ) cout << 1;
		else cout << 0;
	}

	cout << "\n";

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '0') cout << 1;
		else cout << 0;
	}

	cout << "\n";

	for (int i = 0; i < a.length(); i++) {
		if ( b[i] == '0') cout << 1;
		else cout << 0;
	}

	cout << "\n";

	return 0;
}