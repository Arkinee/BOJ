#include <iostream>
using namespace std;


int main() {

	int a, b, c;
	int d[10]{0};
	int mul;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	mul = a * b * c;	//세 수의 곱

	for (int i = 0; i < 10; i++) {
		if (mul / 10 == 0) {		// 10으로 나눈 몫이 0이면 1자리 숫자임 -> 그 숫자 값 번째의 배열 개수 +1 해줌

			d[mul % 10]++;
			break;			// 1자리에서 더이상 할 필요 없으므로 for문을 빠져나간다.

		}
		else if (mul / 10 != 0) {	// 1자리 이상의 숫자일 때 10으로 나눈 값번째 배열 +1 해주고 10으로 나눠서 1자리 줄임

			d[mul % 10]++;
			mul = mul / 10;

		}
	}

	for (int i = 0; i < 10; i++) {
		cout << d[i] << "\n";		//0부터 9까지 몇번씩 나왔는지 출력
	}


	return 0;
}