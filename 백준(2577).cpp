#include <iostream>
using namespace std;


int main() {

	int a, b, c;
	int d[10]{0};
	int mul;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	mul = a * b * c;	//�� ���� ��

	for (int i = 0; i < 10; i++) {
		if (mul / 10 == 0) {		// 10���� ���� ���� 0�̸� 1�ڸ� ������ -> �� ���� �� ��°�� �迭 ���� +1 ����

			d[mul % 10]++;
			break;			// 1�ڸ����� ���̻� �� �ʿ� �����Ƿ� for���� ����������.

		}
		else if (mul / 10 != 0) {	// 1�ڸ� �̻��� ������ �� 10���� ���� ����° �迭 +1 ���ְ� 10���� ������ 1�ڸ� ����

			d[mul % 10]++;
			mul = mul / 10;

		}
	}

	for (int i = 0; i < 10; i++) {
		cout << d[i] << "\n";		//0���� 9���� ����� ���Դ��� ���
	}


	return 0;
}