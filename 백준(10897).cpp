#include <iostream>
using namespace std;
#define MOD 1000000007

int main() {

	ios_base::sync_with_stdio(false);
	
	int n;
	long long mod = MOD;

	cin >> n;
	long long cntCur = 1;
	long long cntLine = 1;
	long long before;

	int a;
	cin >> a;
	if (a == 1) {
		cout << 1 << "\n";
		before = a;
	}

	for (int i = 2; i <= n; i++) {
		cin >> a;

		cout << ((cntCur % mod) + ((((before - 1)%mod) * i) % mod) + a) % mod << "\n";

		cntLine *= i;
		cntLine %= mod;
		cntCur += cntLine;
		cntCur %= mod;
		before = ((((before - 1) % mod) * i) % mod) + a;
	}


	return 0;
}