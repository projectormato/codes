#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  std::cout<<std::fixed<<std::setprecision(10);
  ll n, k;
  cin >> n >> k;
  double base = 1.0/n;
  // cout << base << endl;
  double ans = 0;
  FOR(i, 1, n+1) {
    double now = base;
    ll target = i;
    while (target < k) {
      now /= 2;
      target *= 2;
    }
    ans += now;
  }
  cout << ans << endl;
}
