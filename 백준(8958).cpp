#include <iostream>
#include <string>
using namespace std;

void score(string a) {

	int sc = 0;
	int cnt = 1;
	int i = 0;
	while (a[i] != '\0') {
		if (a[i] == 'O') {	//�迭�� ����ִ� ���� O�϶� ������ �� ������, ���� ������ 1�÷���
			sc += cnt;
			cnt++;
			i++;
		}
		else if (a[i] == 'X') {	//�迭�� X��������� ���� ���� 1�� �������
			cnt = 1;
			i++;
		}
	}

	cout << sc << "\n";

}

int main() {
	
	int n;	//�׽�Ʈ ����

	//	scanf_s("%d", &n);	//���� ���Ƽ� ��� �׽�Ʈ ������ ���ڿ��� �־����..
	cin >> n;
	cin.ignore();

	string a{};

	for (int i = 1; i <= n; i++) {
		getline(cin, a);
		score(a);
	}


		return 0;
}

