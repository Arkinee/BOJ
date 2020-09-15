#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	// ����� 4cent 2 penny, 4 penny, �� ���� ��� 1�� ����
	int n;
	
	int i = 1;
	double minus1 = 3.5;	// 4 cents ��� a penny for 2 ����
	double minus2 = 3.75;	// 4 cents ��� a penny for 4 ����

	do {
		cin >> n;
		if (n == 0) continue;

		cout << "Case " << i++ << ":\n";
		cout << n << " pencils for " << n << " cents\n";

		int count = 0;
		for (int i = 1; i < n - 2; i++) {
			
			int haveTo = n - (4 * i);

			double compare = (double)(n - i) * 0.5;
			if (haveTo >= compare) {
				continue;
			}

			double minus = (double)(compare - haveTo);
			int qPenny = minus / 0.25;

			if (qPenny == 0 || (n - i - qPenny) <= 0) break;

			count += 1;
			cout << i << " at four cents each\n";
			cout << n - i - qPenny << " at two for a penny\n";
			cout << qPenny << " at four for a penny\n";
			cout << "\n";
		}

		if (count == 0) {
			cout << "No solution found.\n\n";
		}

	} while (n != 0);

	return 0;
}