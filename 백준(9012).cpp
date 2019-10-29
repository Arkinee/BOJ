#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);

	int t;
	string s;
	stack<char> a;
	string emt;

	cin >> t;

	for (int j = 0; j < t; j++) {

		cin >> s;

		for (unsigned int i = 0; i < s.length(); i++) {

			if (s[i] == '(') {

				a.push('(');

			}
			else if (s[i] == ')') {
				if (s[i - 1] == '(' && i != 0) {
					a.pop();
				}
			}
		}

		if (a.empty()) {
			emt = "YES\n";
		}
		else emt = "NO\n";

		cout << emt;
	}
	

	return 0;
}