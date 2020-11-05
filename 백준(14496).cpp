#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define INF 987654321
#define ll long long

int n;
vector<pair<int, int>> adj[1001];

vector<int> dijstra(int src){

  vector<int> dist(n+1, INF);
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  dist[src] = 0;
  pq.push(make_pair(0, src));

  while(!pq.empty()){

    int cost = pq.top().first;
    int here = pq.top().second;
    pq.pop();

    if(dist[here] < cost) continue;

    for(auto &p : adj[here]){
      int there = p.first;
      int nextDist = cost + p.second;
      if(dist[there] > nextDist){
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

  int a,b, m;
  cin >> a >> b;
  cin >> n >> m;

  while(m--){

    int x, y;
    cin >> x >> y;

    adj[x].push_back(make_pair(y, 1));
    adj[y].push_back(make_pair(x, 1));

  }

  vector<int> temp = dijstra(a);

  /*
  for(int i : temp){
    cout << i << " ";
  }
  cout << "\n";
  */

  if(temp[b] != INF){
    cout << temp[b];
  }else cout << -1;

  cout << "\n";

  return 0;
}