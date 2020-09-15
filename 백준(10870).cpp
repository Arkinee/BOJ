#include <iostream>
using namespace std;


int fibonacci(int num) {

	if (num == 0) return 0;
	if (num == 1) return 1;

	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {

	int n;		//n번째 피보나치 수

	cin >> n;

	cout << fibonacci(n) << "\n";

	return 0;
}