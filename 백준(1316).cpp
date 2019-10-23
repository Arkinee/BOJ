#include <iostream>
#include <string>
using namespace std;

int main() {
	
	std::ios::sync_with_stdio(false);
	int n;
	string input;
	int result = 0;

	cin >> n;

	if (n > 100 || n <= 0) return -1;

	for (int i = 0; i < n; i++) {
		
		cin >> input;

		if (input.length() > 100) return -1;

		bool select = true;			//�׷� �ܾ��� ��� true ����
		bool check[26] = { false };	//������ ���� ���ĺ� üũ

		check[input[0] - 'a'] = true;
		
		for (int j = 1; j < input.length(); j++) {
			
			if ((input[j] != input[j-1])) {
				if (check[input[j] - 'a']) {
					select = false;
					break;
				}
				else {
					check[input[j] - 'a'] = true;
				}
			}
			else check[input[j] - 'a'] = true;

		}

		if (select) {
			result++;
		}

	}
	cout << result << endl;
}