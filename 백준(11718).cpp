#include <iostream>
#include <string>
using namespace std;

//11718 , 11719 ����

int main() {

	string a;

/*  //11718�� �ҽ�
	for (int i = 0; i < 100; i++) {
		getline(cin, a);

		if (a == "" || a == "\n" || a.empty()) {
			//a.empty() �� ���� a�� ��������� true �ƴϸ� false ��ȯ
			break;
				
		} else cout << a << "\n";	//�Է� ���ڸ��� �ٷ� ���
	}
	*/

	//11719�ҽ�

	for (int i = 0; i < 100; i++) {
		getline(cin, a);

		cout << a << "\n";
	}

	return 0;
}