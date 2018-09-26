#include <iostream>
#include <string>
using namespace std;


int main() {

	int n;	//테스트 케이스 개수
	int cnt; //반복 횟수
	string s;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cnt;
		cin >> s;

		for (int j = 0; j < s.length(); j++) {	//한 문자씩 반복횟수만큼 출력
			for (int z = 0; z < cnt; z++) {
				printf("%c", s[j]);
			}
		}
		

		cout << "\n";
		
		s = {};

	}




	return 0;
}