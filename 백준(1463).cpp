#include <iostream>
using namespace std;

int d[1000000];

int min(int a, int b) {
	int temp = a;
	if (b <= a) temp = b;
	return temp;
}

//botton - up
void dp(int k) {

	d[0] = 0;
	d[1] = 0;
	d[2] = 1;
	d[3] = 1;

	for (int n = 4; n <= k; n++) {
		
		if (n % 3 == 0 && n % 2 == 0) {
			 d[n] = 1 + min(min(d[n / 3], d[n / 2]), d[n - 1]);
		}
		else if (n % 3 == 0) {
			 d[n] = 1 + min(d[n / 3], d[n - 1]);
		}
		else if (n % 2 == 0) {
			 d[n] = 1 + min(d[n / 2], d[n - 1]);
		}
		else d[n] = 1 + d[n - 1];

	}
}

int main() {

	ios::sync_with_stdio(false);

	int n;

	cin >> n;
	dp(n);
	cout << d[n];

	return 0;
}
