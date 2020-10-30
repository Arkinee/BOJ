#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long


int temp[100000];
int sum[100000];
int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	int left = 0;
	int right = k - 1;

	for (int i = 0; i < n; i++) {
		cin >> temp[i];
	}

	sum[0] = temp[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + temp[i];
	}

	int max = sum[k - 1];

	for (int i = k; i < n; i++) {

		if (sum[i] - sum[i - k] > max) max = sum[i] - sum[i - k];

	}

	cout << max << "\n";

	return 0;
}