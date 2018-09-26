#include <iostream>
using namespace std;


int main() {

	int score[5]{};
	int sum = 0;

	for (int i = 0; i < 5; i++) {		//40점 이하면 40점으로 계산
		cin >> score[i];
		if (score[i] <= 40) {
			score[i] = 40;
		}

		sum += score[i];
	}

	int avg = sum / 5;

	cout << avg << "\n";


	return 0;
}