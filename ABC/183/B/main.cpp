#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  double ans = ( (sx*gy) + (gx*sy) ) / (sy + gy);
  string a;
  cin >> a;
  cout << fixed << setprecision(7) << ans << endl;
}
