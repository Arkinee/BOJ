#include <iostream>
#include <string>
using namespace std;

int main() {

	int cnt=1;

	string a{};

	getline(cin,a);

	for (int i = 0; i < a.length(); i++) {
		
		if (a[i] == ' ') {		// ���Ⱑ ����� �ܾ� +1 ����
			cnt++;
		}
	}

	if (a[0] == ' ')	//ó�� �Է��� �����̸� �ܾ �ƴϹǷ� -1����
		cnt--;
	if (a[a.length() - 1] == ' ')	//�������� �������� ������ �ܾ� �ƴϹǷ� -1����
		cnt--;

	cout << cnt;

	return 0;
}