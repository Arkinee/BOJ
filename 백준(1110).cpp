#include <stdio.h>


int main() {

	int n = 0;
	int num= -1;	//초기화를 -1로 해서 while문에 들어가는데 문제 없게 함 
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