#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll n;
  cin >> n;
  ll u[n+10], v[n+10], w[n+10];
  ll ans[n+10] = {};
  rep(i, n) {
    cin >> u[i] >> v[i] >> w[i];
    if (w[i] %2 == 0) {
      if (ans[u[i]] == 0) {
        /* code */
      }
    }
  }

}
