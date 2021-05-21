#include<iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int max = 0;
	int idx = -1;
	for (int i = 1; i <= 9; i++) {

		int a;
		cin >> a;

		max = (a >= max ? a : max);
		idx = (a >= max ? i : idx);

	}

	cout << max << "\n" << idx << "\n";

	return 0;
}