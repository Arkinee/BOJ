#include <iostream>
#include <string>
using namespace std;


int main() {

	int n;	//�׽�Ʈ ���̽� ����
	int cnt; //�ݺ� Ƚ��
	string s;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cnt;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {	//�� ���ھ� �ݺ�Ƚ����ŭ ���
			for (int z = 0; z < cnt; z++) {
				printf("%c", s[j]);
			}
		}
		

		cout << "\n";
		
		s = {};

	}




	return 0;
}