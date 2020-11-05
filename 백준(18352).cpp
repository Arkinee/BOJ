#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define INF 987654321

int n;
vector<pair<int, int>> adj[300001];

vector<int> dijkstra(int src) {
	vector<int> dist(n + 1, INF);
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

  int m, k, x;
  cin >> n >> m >> k >> x;

  while(m--){

    int a, b;
    cin >> a >> b;

    adj[a].push_back(make_pair(b, 1));

  }

  vector<int> distance = dijkstra(x);
  int cnt = 0;
  for(int i=1; i<distance.size(); i++){

    if(distance[i] == k){
      cout << i << "\n";
      cnt += 1;
    }

  }

  if(cnt == 0){
    cout << -1 << "\n";
  }

  return 0;
}