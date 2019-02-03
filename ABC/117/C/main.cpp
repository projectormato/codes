#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll N, M;
  cin >> N >> M;
  ll x[M], sa[M], res = 0;
  rep(i, M) {
    cin >> x[i];
  }
  if (N >= M) {
    cout << res << endl;
    exit(0);
  }
  sort(x, x+M);
  rep(i, M-1) {
    sa[i] = x[i+1] - x[i];
  }
  sort(sa, sa+M-1);
  rep(i, M-N){
    res += sa[i];
  }
  cout << res << endl;
}
