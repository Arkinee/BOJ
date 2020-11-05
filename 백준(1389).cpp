#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
#define INF 987654321
#define ll long long

ll dist[100][100];
ll sum[100];
int main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      
      if(i != j) dist[i][j] = INF;
      else dist[i][j] = 0;

    }
  }

  while(m--){

    int a, b;
    cin >> a >> b;

    dist[a-1][b-1] = 1;
    dist[b-1][a-1] = 1;

  }

  for(int k=0; k<n; k++){
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }

  int index = -1;
  int temp = INF;

  for(int i=n-1; i>=0; i--){
    for(int j=n-1; j>=0; j--){
      //cout << dist[i][j] << " ";
      if(dist[i][j] != INF) sum[i] += dist[i][j];
    }

    //cout << "\n";
    if(temp >= sum[i]){
       index = i + 1;
       temp = sum[i];
    }
  }

  cout << index << "\n";
  

  return 0;
}