#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void makeStar(int k, string *arr);

int main() {

	ios::sync_with_stdio(false);	//속도 향상에 기여
	int n;

	cin >> n;
	if (n % 3 != 0 || ((n % 2 != 0) && (n != 3))) {	//n은 3과 2의 배수여야한다.
		return -1;
	}


	string *arr = new string[n];

	arr[0] = "  *  ";	//가장 기본 형태
	arr[1] = " * * ";
	arr[2] = "*****";

	for (int k = 1; 3 * pow(2, k) <= n; ++k) {
		makeStar(k, arr);
	}

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << endl;
	}

}

void makeStar(int k, string *arr) {

	int bottom = 3 * pow(2, k);			//
	int middle = bottom / 2;

	for (int i = middle; i < bottom; ++i) {	//절반부터 바탁까지

		arr[i] = arr[i - middle] + " " + arr[i - middle];	// [절반모양 + 1칸 빈자리 + 절반 모양] 의 형태	

	}

	string space = "";
	while (space.length() < middle) {	//절반 이하는 절반크기 만큼의 빈 공간을 앞에 더해줘야한다.
		space += " ";
	}

	for (int i = 0; i < middle; i++) {		// 위에서 구해준 공백 + 절반의 모양 + 공백 을 해줘야 밑에 절반도 제대로 나옴
		arr[i] = space + arr[i] + space;
	}

}