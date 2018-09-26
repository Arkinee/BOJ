#include <iostream>
#include <string>
using namespace std;


int main() {

	string word;
	int cnt[ 26 ];
	int temp = 0;
	int dup = 0;	//중복확인

	 char alpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m',
						'n','o','p','q','r','s','t','u','v','w','x','y','z' };
	
	getline(cin, word);

	for (int i = 0; i < 26; i++) {		//cnt배열 초기화
		cnt[i] = 0;
	}

	for (int i = 0; i < word.length(); i++) {	

		for (int j = 0; j < 26; j++) {
			if (word[i] == alpha[j] || word[i] == alpha[j]-32) {	//단어의 i번째 알파벳과 알파벳 배열의 j행의 알파벳 비교 후(-32는 대문자) 
				cnt[j]++;											//같으면 알파벳 순번의 정수 배열 숫자 증가  
			}
		}
	}
	
	for (int i = 1; i < 26; i++) {


		if (cnt[temp] < cnt[i]) {	//가장 많이 나온 숫자 찾기
			temp = i;				//새로 가장 많이 나온 숫자가 나오면  중복확인 초기화
			dup = 0;
		}
		else if (cnt[temp] == cnt[i]) {
			dup = 1;				//가장 많이 나온 숫자가 2개 이상이면 중복확인 true

		}
	
	}

	if (dup) {
		cout << "?" << "\n";
	}
	else printf("%c\n", alpha[temp]-32);
		

	return 0;
}