#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	vector<string> temp;

	while (a--) {

		string n;
		cin >> n;
		temp.push_back(n);

	}

	sort(temp.begin(), temp.end());

	cout << temp[b - 1] << "\n";

	return 0;
}