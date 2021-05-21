#include<iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	a = ((b < 45) ? a - 1 : a);
	a = ((a < 0) ? 24 + a : a);
	b = ((b < 45) ? 15 + b : b - 45);

	cout << a << " " << b << "\n";

	return 0;
}