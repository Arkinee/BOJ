#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int time = 0;
	int natural = 1;
	
	while (n > 0) {
		if (n >= natural) {
			n -= natural;
			natural += 1;
		}
		else {
			natural = 1;
			n -= natural;
			natural += 1;
		}

		time += 1;
	}


	cout << time << "\n";

	return 0;
}