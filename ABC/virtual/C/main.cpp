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
  ll A, B, C;
  cin >> A >> B >> C;
  ll ans = 0;
  while (true) {
    if (A % 2 == 1 || B % 2 == 1 || C % 2 == 1) {
      break;
    }
    ll tmpa = A, tmpb = B, tmpc = C;
    A = tmpb/2 + tmpc/2;
    B = tmpa/2 + tmpc/2;
    C = tmpb/2 + tmpa/2;
    ans += 1;
    if (ans >= 1000) {
      ans = -1;
      break;
    }
  }
  cout << ans << endl;
}
