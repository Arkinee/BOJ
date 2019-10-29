#include <iostream>
using namespace std;


unsigned int dp[11];	//���� : 11���� ���� ��� => dp[10]���� �����ؾ� �ϹǷ� 11�� ����

 int d(int n) {

	 if (dp[n] != 0) {
		 return dp[n];
	 }
	
	 dp[n] = d(n - 1) + d(n - 2) + d(n - 3);
	 
	 return dp[n];
}



int main() {

	int test;
	int n;

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	ios_base::sync_with_stdio(false);

	cin >> test;

	for (int i = 0; i < test; i++) {
		
		cin >> n;
		cout << d(n) << "\n";

	}

	


	return 0;
}