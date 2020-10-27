#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

void next(int temp, int k, int n) {

	int compare = (temp - (k + 3)) / 2 + 1;
	
	if (n == compare) {
		cout << "m" << "\n";
		return;
	}
	else if (n > compare && n <= compare + (k + 2)) {
		cout << "o" << "\n";
		return;
	}
	else if (n < compare) {
		return next(compare, k - 1, n);
	}
	else if (n >= compare + (k + 3)) {
		return next(compare - 1, k - 1, n - (compare - 1) - (k + 3));
	}
	
}

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int temp = 3;
	int k = 0;
	int before = 0;

	while (temp < n) {

		k += 1;

		before = temp;
		temp = temp * 2 + 3 + k;

	}	//k ±¸ÇßÀ½

	next(temp, k, n);

	return 0;
}