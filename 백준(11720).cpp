#include <iostream>
using namespace std;


int main() {

	int N;
	int sum = 0;


	cin >> N;

	if (N < 1 || N > 100) {
		return 0;
	}
	
	char *a = new char[N + 1]; // 0�� �� �ڸ�����

	cin >> a;

	for (int i = 0; i < N; i++) {
		

		sum += a[i] - '0'; // ���ڸ� ���ڷ� �ٲܶ� ������ '0' �Ǵ� 48�� ����� ��

	}
	
	cout << sum << "\n";

	return 0;
}