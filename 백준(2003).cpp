#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int arr[10001];
int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	ll n, a;
	cin >> n >> a;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = 0, right = 0;
	int count = 0;

	ll sum = 0;

	while (1) {
		
		if (sum >= a) {
			sum -= arr[left];
			left++;
		}
		else if (right == n) break;
		else sum += arr[right++];
		
		if (sum == a) count += 1;

	}

	cout << count << "\n";

	return 0;
}