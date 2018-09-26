#include <iostream>
#include <string>
using namespace std;

//11718 , 11719 같이

int main() {

	string a;

/*  //11718번 소스
	for (int i = 0; i < 100; i++) {
		getline(cin, a);

		if (a == "" || a == "\n" || a.empty()) {
			//a.empty() 는 현재 a가 비어있으면 true 아니면 false 반환
			break;
				
		} else cout << a << "\n";	//입력 하자마자 바로 출력
	}
	*/

	//11719소스

	for (int i = 0; i < 100; i++) {
		getline(cin, a);

		cout << a << "\n";
	}

	return 0;
}