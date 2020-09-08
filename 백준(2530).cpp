#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int a, b, c, time;
	cin >> a >> b >> c;

	cin >> time;

	
	a += (time / 3600);
	time %= 3600;

	b += (time / 60);
	time %= 60;

	c += time;

	if (c >= 60) {
		b += (c / 60);
		c %= 60;
	}

	if (b >= 60) {
		a += (b / 60);
		b %= 60;
	}

	if (a >= 24) {
		a -= (a / 24) * 24;
	}

	cout << a << " " << b << " " << c << "\n";

	return 0;
}