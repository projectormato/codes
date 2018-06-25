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

int main(){
  ll N, H;
  cin >> N >> H;
  ll a[N], b[N], ans = 0;
  rep(i, N){
    cin >> a[i] >> b[i];
  }
  sort(a, a+N, greater<ll>());
  sort(b, b+N, greater<ll>());
  rep(i, N){
    if (b[i] > a[0]) {
      H -= b[i];
      ans += 1;
    }
    if (H <= 0) {
      break;
    }
  }
  if (H >= 0) {
    ans += H/a[0];
    if (H % a[0] != 0) {
      ans += 1;
    }
  }
  cout << ans << endl;
}
