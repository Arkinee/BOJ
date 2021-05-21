#include<iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int a, b;
	cin >> a;
	cin >> b;

	bool x = ((a > 0) ? true : false);
	bool y = ((b > 0) ? true : false);

	cout << (x ? (y ? 1 : 4) : (y ? 2 : 3));
	cout << "\n";

	return 0;
}