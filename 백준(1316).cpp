#include <iostream>
#include <string>
using namespace std;

int main() {
	
	std::ios::sync_with_stdio(false);
	int n;				//입력 단어 갯수 
	string input;
	int result = 0;

	cin >> n;

	if (n > 100 || n <= 0) return -1;	//100보다 작거나 같은 자연수

	for (int i = 0; i < n; i++) {
		
		cin >> input;

		if (input.length() > 100) return -1;

		bool select = true;		// true면 그룹 단어
		bool check[26] = { false };	//이전에 나온 영문자 나왔는지 체크

		check[input[0] - 'a'] = true;	//처음 나온 문자 초기 체크 값 true
		
		for (int j = 1; j < input.length(); j++) {
			
			if ((input[j] != input[j-1])) {		//바로 전에 나온 문자와 다를 경우
				if (check[input[j] - 'a']) {	//바로 전 문자와 다른데 이전에 이미 나온 경우
					select = false;
					break;
				}
				else {			//처음 나온 문자
					check[input[j] - 'a'] = true;
				}
			}
			else check[input[j] - 'a'] = true;	//바로 전 문자와 같은 경우

		}

		if (select) {	// true일 경우 그룹 단어 개수 증가
			result++;
		}

	}
	cout << result << endl;	//결과
}