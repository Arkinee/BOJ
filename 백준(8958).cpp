#include <iostream>
#include <string>
using namespace std;

void score(string a) {

	int sc = 0;
	int cnt = 1;
	int i = 0;
	while (a[i] != '\0') {
		if (a[i] == 'O') {	//배열에 들어있는 값이 O일때 점수에 값 더해줌, 다음 점수는 1올려줌
			sc += cnt;
			cnt++;
			i++;
		}
		else if (a[i] == 'X') {	//배열에 X들어있으면 다음 점수 1로 만들어줌
			cnt = 1;
			i++;
		}
	}

	cout << sc << "\n";

}

int main() {
	
	int n;	//테스트 개수

	//	scanf_s("%d", &n);	//버퍼 남아서 계속 테스트 개수도 문자열에 넣어버림..
	cin >> n;
	cin.ignore();

	string a{};

	for (int i = 1; i <= n; i++) {
		getline(cin, a);
		score(a);
	}


		return 0;
}

