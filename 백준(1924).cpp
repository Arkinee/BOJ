#include <iostream>
using namespace std;


int main() {

	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int x, y;
	int day=0;

	cin >> x >> y;

	for (int i = 0; i < x-1; i++) {

		day = day + a[i];
	}

	day = day + y;

	if (day % 7 == 0) {
		cout << "SUN" << "\n";
	}else if (day % 7 == 1) {
		cout << "MON" << "\n";
	}else if (day % 7 == 2) {
		cout << "TUE" << "\n";
	}else if (day % 7 == 3) {
		cout << "WED" << "\n";
	}else if (day % 7 == 4) {
		cout << "THU" << "\n";
	}else if (day % 7 == 5) {
		cout << "FRI" << "\n";
	}else if (day % 7 == 6) {
		cout << "SAT" << "\n";
	}

	return 0;
}