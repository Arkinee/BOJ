#include <iostream>
using namespace std;



int main() {

	int b[9]{};
	string a{};
	int tf = 0;

	for (int i = 0; i < 8; i++) {
		
		cin >> b[i];

		if (b[i] == i + 1) {		//������� �ö󰡸� tf���� �ø�
			tf++;
		}else 
		if (b[i] == 8 - i) {		//������� �������� tf���� ����
			tf--;
			}
	}
		
	if (tf == 8) {					//tf�� 8�̶�� ���� 8���� ���ڰ� �� +1�� �������� �̷�
		a = "ascending";
	}
	else if (tf == -8) {			//				"					-1��
		a = "descending";
	}
	else a = "mixed";

	for (int i = 0; i < 10; i++) {
		if (a[i] != '\0') {			// �� ������ �����ָ� a[i]�� ��������� �����Ϸ��ؼ� ���� ��
			cout << a[i];
		}
		else break;
		}


	return 0;
}