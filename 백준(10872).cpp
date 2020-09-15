#include <iostream>
using namespace std;


int factorial(int num) {

	if (num == 1) {
		return 1;
	}

	if (num == 0) {
		return 1;
	}

	return num * factorial(num - 1);
}

int main() {

	int n;	//팩토리얼을 할 수

	cin >> n;
	cout << factorial(n) << endl;

}