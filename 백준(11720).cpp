#include <iostream>
using namespace std;


int main() {

	int N;
	int sum = 0;


	cin >> N;

	if (N < 1 || N > 100) {
		return 0;
	}
	
	char *a = new char[N + 1]; // 0이 들어갈 자리까지

	cin >> a;

	for (int i = 0; i < N; i++) {
		

		sum += a[i] - '0'; // 문자를 숫자로 바꿀때 차이인 '0' 또는 48을 빼줘야 함

	}
	
	cout << sum << "\n";

	return 0;
}