#include <iostream>
#include <string>
using namespace std;

int main() {

	int cnt=1;

	string a{};

	getline(cin,a);

	for (int i = 0; i < a.length(); i++) {
		
		if (a[i] == ' ') {		// 띄어쓰기가 생기면 단어 +1 해줌
			cnt++;
		}
	}

	if (a[0] == ' ')	//처음 입력이 공백이면 단어가 아니므로 -1해줌
		cnt--;
	if (a[a.length() - 1] == ' ')	//마지막에 공백으로 끝나면 단어 아니므로 -1해줌
		cnt--;

	cout << cnt;

	return 0;
}