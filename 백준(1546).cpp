#include <iostream>
using namespace std;


int main() {

	int n;	//���� ���� <= 1000
	double big = 0;
	double sum = 0;


	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > big) {
			big = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		a[i] = (double)a[i] / big * 100;
		sum += a[i];
	}

	double avg = sum / n;

	cout << avg*100/100.00 << "\n";

	return 0;
}