#include <iostream>
using namespace std;



int main() {

	int b[9]{};
	string a{};
	int tf = 0;

	for (int i = 0; i < 8; i++) {
		
		cin >> b[i];

		if (b[i] == i + 1) {		//순서대로 올라가면 tf값을 올림
			tf++;
		}else 
		if (b[i] == 8 - i) {		//순서대로 떨어지면 tf값을 내림
			tf--;
			}
	}
		
	if (tf == 8) {					//tf가 8이라는 것은 8개의 숫자가 다 +1씩 등차수열 이룸
		a = "ascending";
	}
	else if (tf == -8) {			//				"					-1씩
		a = "descending";
	}
	else a = "mixed";

	for (int i = 0; i < 10; i++) {
		if (a[i] != '\0') {			// 이 조건을 안해주면 a[i]가 비어있을때 참조하려해서 에러 뜸
			cout << a[i];
		}
		else break;
		}


	return 0;
}