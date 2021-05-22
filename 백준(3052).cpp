#include <iostream>
using namespace std;

int arr[42] = {0};
int main() {

	ios::sync_with_stdio(false);

	for (int i = 0; i < 10; i++) {

		int a;
		cin >> a;

		arr[a % 42] += 1;

	}

	int count = 0;
	for (int i = 0; i < 42; i++) {

		count = (arr[i] != 0 ? count+1 : count);

	}

	cout << count << "\n";

	return 0;
}