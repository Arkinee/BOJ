#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);

	int a;
	cin >> a;

	bool four = (a % 4 == 0 ? true : false);
	bool hundred = (a % 100 == 0 ? true : false);
	bool four_hundred = (a % 400 == 0 ? true : false);

	cout << ((four && !hundred) || four_hundred ? 1 : 0);
	cout << "\n";

	return 0;
}