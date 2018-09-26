#include <stdio.h>

int main() {


	int c=0; //테스트 게이스의 개수
	int n=0; // 테스트의 학생수
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		
		scanf("%d", &n);
		int b[1001]{};
		int sum = 0;
		double avg = .0;

		for (int j = 0; j < n; j++) {
			scanf("%d", &b[j]);
			sum += b[j];
		}

		avg = (double)sum / n;	//평균
		int cnt = 0;

		for (int j = 0; j < n; j++) {	//평균 이상 학생 수 구하기
			if (b[j] > avg) {
				cnt++;
			}
		}

		printf("%.3f%%\n", (double)cnt * 100 / n);	//결과 출력

	}


	return 0;
}