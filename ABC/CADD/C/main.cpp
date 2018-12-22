#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll n, p, res = 1, now = 0;
  cin >> n >> p;
  if (n == 1 || p == 1) {
    cout << p << endl;
    exit(0);
  }
  bool flag = true;
  for (ll i = sqrt(p); i > 1; i--) {
    now = p;
    flag = true;
    rep(j, n) {
      if (now % i != 0) {
        flag = false;
        break;
      }else{
        now /= i;
      }
    }
    if (flag) {
      res = i;
      break;
    }
  }
  cout << res << endl;
}
