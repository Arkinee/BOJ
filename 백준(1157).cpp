#include <iostream>
#include <string>
using namespace std;


int main() {

	string word;
	int cnt[ 26 ];
	int temp = 0;
	int dup = 0;	//�ߺ�Ȯ��

	 char alpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m',
						'n','o','p','q','r','s','t','u','v','w','x','y','z' };
	
	getline(cin, word);

	for (int i = 0; i < 26; i++) {		//cnt�迭 �ʱ�ȭ
		cnt[i] = 0;
	}

	for (int i = 0; i < word.length(); i++) {	

		for (int j = 0; j < 26; j++) {
			if (word[i] == alpha[j] || word[i] == alpha[j]-32) {	//�ܾ��� i��° ���ĺ��� ���ĺ� �迭�� j���� ���ĺ� �� ��(-32�� �빮��) 
				cnt[j]++;											//������ ���ĺ� ������ ���� �迭 ���� ����  
			}
		}
	}
	
	for (int i = 1; i < 26; i++) {


		if (cnt[temp] < cnt[i]) {	//���� ���� ���� ���� ã��
			temp = i;				//���� ���� ���� ���� ���ڰ� ������  �ߺ�Ȯ�� �ʱ�ȭ
			dup = 0;
		}
		else if (cnt[temp] == cnt[i]) {
			dup = 1;				//���� ���� ���� ���ڰ� 2�� �̻��̸� �ߺ�Ȯ�� true

		}
	
	}

	if (dup) {
		cout << "?" << "\n";
	}
	else printf("%c\n", alpha[temp]-32);
		

	return 0;
}