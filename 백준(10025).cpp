#include <iostream>
#include <algorithm>
using namespace std;

long long arr[1000000];
long long sum[1000000];
int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long n, k;
	cin >> n >> k;

	while (n--) {
		long long g, x;
		cin >> g >> x;
		arr[x] = g;
	}
	
	long long smax = 0;

	sum[0] = arr[0];
	// ДЉРћЧе
	for (int i = 1; i <= 1000000; i++) {
		sum[i] = sum[i - 1] + arr[i];
	}

	if (k > 1000000) cout << sum[1000000] << "\n";
	else {

		for (int i = 0; i <= 1000000; i++) {

			if (i + k <= 1000000 && i - k >= 1) {
				smax = max(smax, sum[i + k] - sum[i - k - 1]);
			}
		}

		cout << smax << "\n";

	}

	return 0;
}