#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define INF 987654321

ll dist[100][100];
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n;	// 도시
	cin >> m;	// 버스

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if(i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}

	for (int i = 0; i < m; i++) {

		int a, b, c;
		cin >> a >> b >> c;
		if (dist[a - 1][b - 1] > c) {
			dist[a - 1][b - 1] = c;
		}

	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (dist[i][j] == INF) {
				cout << "0 ";
			}
			else {
				cout << dist[i][j] << " ";
			}
		}
		cout << "\n";
	}

	return 0;

}
