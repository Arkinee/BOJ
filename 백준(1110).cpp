#include <stdio.h>


int main() {

	int n = 0;
	int num= -1;	//�ʱ�ȭ�� -1�� �ؼ� while���� ���µ� ���� ���� �� 
	int cnt = 0;
	scanf("%d", &n);

	while (num != n){
		
		if (cnt == 0) {
			num = n;
		}
		num = (num % 10) * 10 + ((num / 10) + (num % 10)) % 10;
		cnt++;
	}
	
	printf("%d", cnt);


	return 0;
}