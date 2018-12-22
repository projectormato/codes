#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll n, h, w, res = 0;
  cin >> n >> h >> w;
  ll a[n], b[n];
  rep(i, n){
    cin >> a[i] >> b[i];
  }
  rep(i, n) {
    if (a[i] >= h && b[i] >= w) {
      res += 1;
    }
  }
  cout << res << endl;
}
