#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll n, ans = 0;
  cin >> n;
  for(ll i = 1;  i < sqrt(n); i++) {
    // cout << n/m << " " << n%m << endl;
    if (n%i == 0) {
      ans += (n/i)-1;
      // cout << (n/i)-1 << endl;
    }
  }
  cout << ans << endl;
}
