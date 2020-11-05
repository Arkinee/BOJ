#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define INF 987654321

ll dist[401][401];

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int v,e;
  cin >> v >> e;

  for(int i=0; i<v; i++){
    for(int j=0; j<v; j++){

      if(i == j) dist[i][j] = 0;
      else dist[i][j] = INF;

    }
  }

  while(e--){
    int a,b,c;
    cin >> a >> b >> c;
    dist[a-1][b-1] = c;
  }

  for(int k=0; k<v; k++){
    for(int i=0; i<v; i++){
      for (int j=0; j<v; j++){
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }

  bool find = false;
  /*
  for(int i=0; i<v; i++){
    for(int j=0; j<v; j++){
      cout << dist[i][j] << " ";
    }
    cout << "\n";
  }
  */

  ll cycle = INF;
  for(int i=0; i<v; i++){ // i -> j
    for(int j= i + 1; j<v; j++){

      if(dist[i][j] != INF && dist[j][i] != INF){

        cycle = min(cycle, dist[i][j] + dist[j][i]);
        
      }
    }
  }

  if(cycle == INF){
    cout << -1 << "\n";
  }else{
    cout << cycle << "\n";
  }


  return 0;
}