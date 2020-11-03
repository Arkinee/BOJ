#include <iostream>
#include <vector>
#include <functional>
#include <queue>
using namespace std;
#define INF 987654321

int v, e, k;
vector<pair<int, int>> adj[20001]; // 인접 리스트

vector<int> dijkstra(int src) {
	vector<int> dist(v + 1, INF);
	dist[src] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push(make_pair(0, src));

	while (!pq.empty()) {
		int cost = pq.top().first;
		int here = pq.top().second;
		pq.pop();

		if (dist[here] < cost) continue;

		for (auto &p : adj[here]) {
			int there = p.first;
			int nextDist = cost + p.second;
			if (dist[there] > nextDist) {
				dist[there] = nextDist;
				pq.push(make_pair(nextDist, there));
			}
		}
	}

	return dist;

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> v >> e;
	cin >> k; // 시작 정점

	for (int i = 0; i < e; i++) {

		int u, v, w;
		cin >> u >> v >> w;

		adj[u].push_back(make_pair(v, w));

	}

	vector<int> v_dist = dijkstra(k);

	for (int i = 1; i < v_dist.size(); i++) {
		
		if (v_dist[i] != INF)
			cout << v_dist[i] << "\n";
		else cout << "INF\n";
	}
	

	return 0;
}