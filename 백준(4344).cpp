#include <stdio.h>

int main() {


	int c=0; //�׽�Ʈ ���̽��� ����
	int n=0; // �׽�Ʈ�� �л���
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

		avg = (double)sum / n;	//���
		int cnt = 0;

		for (int j = 0; j < n; j++) {	//��� �̻� �л� �� ���ϱ�
			if (b[j] > avg) {
				cnt++;
			}
		}

		printf("%.3f%%\n", (double)cnt * 100 / n);	//��� ���

	}


	return 0;
}