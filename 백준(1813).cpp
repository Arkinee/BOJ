#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int n;
	vector<int> v;
	vector<int> result;
	cin >> n;
	while (n--) {

		int a;
		cin >> a;

		v.push_back(a);

	}

	sort(v.begin(), v.end());

	bool isZero = false;
	int temp = v[0];
	int cnt = 1;

	if (temp == 0) isZero = true;

	for (int i = 1; i < v.size(); i++) {

		if (v[i] == 0) isZero = true;

		if (temp == v[i]) {
			cnt += 1;
			continue;
		}
		else {
			if (cnt == temp) {
				result.push_back(temp);
				cnt = 0;
				if (i != (v.size() - 1)) {
					temp = v[i + 1];
					cnt = 1;
				}
			}
			else {
				temp = v[i];
				cnt = 1;
			}
		}
	}

	if (cnt == temp) {
		result.push_back(temp);
	}


	if (result.size() != 0) {
		cout << result[result.size() - 1] << "\n";
	}
	else {
		if (!isZero) {
			cout << 0 << "\n";
		}
		else {
			cout << -1 << "\n";
		}
	}

	return 0;

}