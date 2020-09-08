#include <iostream>
using namespace std;

#define MODENUM 1000000007

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int mod = MODENUM;
	int n, x;
	cin >> n >> x;
	
	long long a, b;
	cin >> a >> b;

	long long cur = 0;
	cur += ((a * (x % mod)) % mod);

	for (int i = n - 1; i >= 0; i--) {
		cin >> a >> b;
		if (i != 0) {
			cur = (((cur + a) % mod) * (x % mod)) % mod;
		}
		else {
			cur += a;
			cur %= mod;
		}
	}

	cout << cur << "\n";

	return 0;
}