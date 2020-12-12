#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll  r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;
  ll r = r2 - r1, c = c2 - c1;
  int ans = 3;
  if (r == 0 && c == 0) {
    ans = 0;
  } else if (r == c || r == -c || abs(r) + abs(c) <= 3) {
    ans = 1;
  } else if((r1 + r2 + c1 + c2)%2 == 0 || abs(r + c) <= 3 || abs(r - c) <= 3 || abs(r) + abs(c) <= 6) {
    ans = 2;
  }
  cout << ans << endl;
}
