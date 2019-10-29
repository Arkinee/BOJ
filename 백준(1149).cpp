#include <iostream>
#include <math.h>
using namespace std;

int d[1001][3];	 // n번째 집을 빨, 초, 노로 칠할때 각각 최소 비용   
unsigned int p[1001][3];	// n 번째 집을 빨 , 초 , 노 로 칠하는 각각 가격 배열

int MIN(int a,int  b) {	// int 2 개 중에 작은 값
	if (a <= b) {
		return a;
	}
	else return b;

}

int MIN3(int a, int b, int c) {	//int 3개 중에 작은 값
	
	int min = 0;
	
	min = MIN(a, b);

	min = MIN(min, c);

	return min;
}

int main() {

	ios_base::sync_with_stdio(false);

	int test;
	cin >> test;

	d[0][0] = d[0][1] = d[0][2] = p[0][0] = p[0][1] = p[0][2] = 0;	//집의 갯수를 1부터 시작하기 위해 d[1001][3]으로 선언 했으므로 집의 수가 0일 때는 0으로 초기화 함 

	for (int i = 1; i <= test; i++) {

		cin >> p[i][0] >> p[i][1] >> p[i][2];	// 각 집마다 빨, 초, 녹으로 칠했을 경우 드는 비용을 저장

	}

	
	for (int i = 1; i <= test; i++) {

		d[i][0] = p[i][0] + MIN(d[i - 1][1], d[i - 1][2]);	//i번째 집을 빨로 칠함 =  i-1번째 집을 초록과 파랑으로 칠하는 두 값 중 작은 값 + i번째 집을 빨간색으로 칠하는 값
		d[i][1] = p[i][1] + MIN(d[i - 1][0], d[i - 1][2]);	//i번째 집을 초로 칠함 =  i-1번째 집을 빨강과 파랑으로 칠하는 두 값 중 작은 값 + i번째 집을 초록색으로 칠하는 값
		d[i][2] = p[i][2] + MIN(d[i - 1][0], d[i - 1][1]);	//i번째 집을 파로 칠함 =  i-1번째 집을 빨강과 초록으로 칠하는 두 값 중 작은 값 + i번째 집을 파란색으로 칠하는 값
		
	}


	cout << MIN3(d[test][0], d[test][1], d[test][2]);	// test번째 집을 빨, 초, 파로 칠하는 값 중에 최소값


	return 0;
}