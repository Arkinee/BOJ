#include<iostream>
#include <cmath>
using namespace std;

int arr[4];
int main() {

	ios::sync_with_stdio(false);

	int a, b;
	cin >> a;
	cin >> b;

	for (int i = 0; i < 3; i++) {

		arr[i] = a * (b % 10);
		b /= 10;

	}

	int sum = 0;
	for (int i = 0; i < 3; i++) {
		cout << arr[i];
		sum += arr[i] * pow(10,i);
		cout << "\n";
	}

	cout << sum << "\n";

	return 0;
}