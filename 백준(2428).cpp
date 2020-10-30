#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	long long size;
	cin >> n;
	int temp = n;
	vector <ll> v;
	
	int idx = 0;
	while (temp--) {

		cin >> size;
		v.push_back(size);

	}

	sort(v.begin(), v.end());

	
	ll ans = 0;
	int wSize = 1;
	int cnt = 0;
	int left = 0;
	for(int i=0; i<v.size(); i++) {
		
		double res = (double)(v[i]) * 0.9;

		while (1) {

			if (v[left] >= res) break;
			else left++;

		}

		ans += i - left;
	}

	cout << ans << "\n";

	return 0;
}