#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll N, K;
  cin >> N >> K;
  ll d = N % K;
  ll m = min(d, abs(d-K));
  ll ans = min(m, N);
  cout << ans << "\n";
}
