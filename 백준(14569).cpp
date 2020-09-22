#include <iostream>
using namespace std;

string studentFree[10001];
string classTime[1001];

string bit_and_fun(string a, string b) {

	string result = "";
	
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '1' && b[i] == '1') result += '1';
		else result += '0';
	}

	return result;
}

int main() {

	ios_base::sync_with_stdio(false);

	int n, m;	// 과목수, 학생수
	cin >> n;
	int temp = n;

	int current = 0;
	while (temp--) {

		int k;
		string default_bit = "000000000000000000000000000000000000000000000000000";
		cin >> k;
		for(int i = 0; i < k; i++) {
			int time;
			cin >> time;
			default_bit[time - 1] = '1';
		}
		
		classTime[current++] = default_bit;
	}

	// 학생
	cin >> m;
	temp = m;

	current = 0;
	while (temp--) {

		int p;
		string default_bit = "000000000000000000000000000000000000000000000000000";
		cin >> p;
		for (int i = 0; i < p; i++) {
			int time;
			cin >> time;
			default_bit[time - 1] = '1';
		}
		
		studentFree[current++] = default_bit;
	}


	for (int i = 0; i < m; i++) {

		int cnt = 0;
		for (int j = 0; j < n; j++) {

			if (bit_and_fun(studentFree[i], classTime[j]) == classTime[j]) {
				cnt += 1;
			}

		}

		cout << cnt << "\n";
	}


	return 0;

}