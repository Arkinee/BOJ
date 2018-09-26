#include <iostream>
using namespace std;


int main() {

	int N = 0;

	cin >> N;

	if (N > 100000)
	{
		return 0;
	}
	for (int i = 1; i <= N; i++) {
		cout << i << "\n";
	}


	return 0;
}