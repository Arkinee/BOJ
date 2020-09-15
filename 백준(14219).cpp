#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	int a = n * m;

	if (a % 6 == 0 || a % 6 == 3) {
		cout << "YES" << "\n";
	}
	else cout << "NO" << "\n";


	return 0;
}