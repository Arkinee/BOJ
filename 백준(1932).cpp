#include <iostream>
using namespace std;

unsigned int n[501][501];
unsigned int dp[501];



int main() {

	ios_base::sync_with_stdio(false);

	int test;
	cin >> test;
	

	for (int i = 1; i <= test; i++) {
		for (int j = 0; j < i; j++) {

			cin >> n[i][j];

		}
	}



}