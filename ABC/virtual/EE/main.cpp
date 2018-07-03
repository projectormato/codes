#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define gets(x) x; cin >> x;
#define puts(x) x; cout << x << endl;
#define list_input(x, n) x[n]; rep(i,n){ gets(x[i]);}
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = (1LL<<50);

ll V;
struct edge { ll to, cost; }; //辺を持つ
vector<edge> G[100100];
ll dist[100100]; //最短経路を持つ

void dk(int s) {
  priority_queue< P, vector<P>, greater<P> > que;
  fill(dist, dist + 100100, INF);
  dist[s] = 0;
  que.push(P(0, s));

  while (!que.empty()) {
    P p = que.top(); que.pop();
    int v = p.second;
    if (dist[v] < p.first) continue;
    rep(i, G[v].size()){
      edge e = G[v][i];
      if (dist[e.to] > dist[v] + e.cost) {
        dist[e.to] = dist[v] + e.cost;
        que.push(P(dist[e.to], e.to));
      }
    }
  }
}

int main(){
  cin >> V;
  ll a, b, c;

  rep(i, V-1){
    cin >> a >> b >> c;
    a --; b --;
    G[a].push_back( {b,c} ); //AからBに行くのにCかかる
    G[b].push_back( {a,c} );
  }

  int Q, K, x, y;
  cin >> Q >> K;
  dk(K-1); // 頂点1が配列番号の0と対応しているため
  rep(i, Q){
    cin >> x >> y;
    cout << dist[x-1] + dist[y-1] << endl;
  }

}
