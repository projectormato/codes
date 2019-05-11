#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int r, b, g, n, ans = 0;
  cin >> r >> b >> g >> n;
  rep(i, n+1) {
    rep(j, n+1) {
      int gnum = n-((r*i) + (b*j));
      if (gnum % g == 0 && gnum >= 0) {
        ans += 1;
        // cout << i*r << " " << j*b << " " << gnum%g << endl;
      }
    }
  }
  cout << ans << endl;
}
