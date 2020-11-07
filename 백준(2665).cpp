#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <stdio.h>
using namespace std;
#define INF 987654321
#define ll long long

int n;
vector<pair<int,int>> adj[10000];
int maze[51][51];

vector<int> dijkstra(int src){

  vector<int> dist(n * n, INF);
  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
  dist[src] = 0;
  pq.push(make_pair(0, src));

  while(!pq.empty()){

    int cost = pq.top().first;
    int here = pq.top().second;
    pq.pop();

    if(dist[here] < cost) continue;

    for(auto &p : adj[here]){
      int there = p.first;
      int nextDist = p.second + cost;

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

  cin >> n;

/*
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%1d", &maze[i][j]);
    }
  }
*/

  for(int i=0; i<n; i++){
    string s;
    cin >> s;

    for(int j=0; j<s.length(); j++){
      maze[i][j] = s[j] - '0';
    }

  }


  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){

      if(j != n - 1){
        if(maze[i][j + 1] == 1) adj[i * n + j].push_back(make_pair(i * n + j + 1, 0));
        else adj[i * n + j].push_back(make_pair(i * n + j + 1, 1));
      }

      if(i != n - 1){
        if(maze[i+1][j] == 1)
        adj[i * n + j].push_back(make_pair((i + 1) * n + j, 0));
        else adj[i * n + j].push_back(make_pair((i + 1) * n + j, 1));
      }

      if(j != 0){
        if(maze[i][j-1] == 1) adj[i * n + j].push_back(make_pair(i * n + j - 1, 0));
        else adj[i * n + j].push_back(make_pair(i * n + j - 1, 1));
      }

      if(i != 0){
        if(maze[i-1][j] == 1) 
        adj[i * n + j].push_back(make_pair((i-1) * n + j, 0));
        else adj[i * n + j].push_back(make_pair((i-1) * n + j, 1));
      }

    }
  }

  vector<int> v = dijkstra(0);

  cout << v[n * n - 1] << "\n";

  return 0;
}