#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
#define ll long long
typedef pair<int, int> P;

const ll INF = (1LL<<50);
int cost[100][100100];
int d[100100];
bool used[100100];
int V;

void dk(int s) {
  fill(d, d + V, 1000000000);
  fill(used, used + V, false);
  d[s] = 0;

  while (true) {
    int v = -1;
    rep(u, V){
      if (!used[u] && (v == -1 || d[u] < d[v])) {
        v = u;
      }
    }
    if (v == -1) break;
    used[v] = true;
    rep(u, V){
      d[u] = min(d[u], d[v] + cost[v][u]);
    }
  }
}

int main(){
  cin >> V;
  int a, b, c;
  rep(i, V){
    rep(j, V){
      cost[i][j] = 1000000000;
    }
  }
  rep(i, V-1){
    cin >> a >> b >> c;
    cost[a-1][b-1] = c;
    cost[b-1][a-1] = c;
  }

  int Q, K, x, y;
  cin >> Q >> K;
  dk(K-1); // 頂点1が配列番号の0と対応しているため

  rep(i, Q){
    cin >> x >> y;
    cout << d[x-1] + d[y-1] << endl;
  }

}
