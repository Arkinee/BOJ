#include <iostream>
#include <algorithm>
using namespace std;

struct point {
	point() {}
	point(int a, int b) : x(a), y(b) {}
	int x;
	int y;
};

point temp[100000];

bool compareX(point a, point b) {
	if (a.x < b.x) {
		return true;
	}
	else return false;
}

bool compareY(point a, point b) {
	if (a.y < b.y) {
		return true;
	}
	else return false;
}

int main() {

	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		temp[i] = point(a,b);
	}

	sort(temp, temp + n, compareX);

	int cnt = 0;
	int current = temp[0].x;
	bool findNew = true;
	for (int i = 1; i < n; i++) {
		
		if (temp[i].x == current && findNew) {
			cnt += 1;
			findNew = false;
		}
		else if(temp[i].x != current){
			current = temp[i].x;
			findNew = true;
		}
	}

	sort(temp, temp + n, compareY);

	current = temp[0].y;
	findNew = true;
	for (int i = 1; i < n; i++) {
		
		if (temp[i].y == current && findNew) {
			cnt += 1;
			findNew = false;
		}
		else if (temp[i].y != current) {
			current = temp[i].y;
			findNew = true;
		}
	}

	cout << cnt << "\n";

	return 0;
}