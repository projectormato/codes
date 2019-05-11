#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int n, ans = 0, a = 0, b = 0, uresii = 0;
  cin >> n;
  string s[n+10];
  rep(i, n) {
    cin >> s[i];
    // 数える
    rep(j, s[i].length()-1) {
      if (s[i][j] == 'A' && s[i][j+1] == 'B') {
        ans += 1;
      }
    }
    if (s[i][0] == 'B') {
      b += 1;
    }
    if (s[i][s[i].length()-1] == 'A') {
      a += 1;
    }
    if (s[i][0] == 'B' && s[i][s[i].length()-1] != 'A') {
      uresii += 1;
    }
    if (s[i][0] != 'B' && s[i][s[i].length()-1] == 'A') {
      uresii += 1;
    }
  }
  // cout << a << " " << b << endl;
  if (uresii == 0 && min(a,b) >= 1) {
    cout << ans + min(a, b) -1 << endl;
  }else {
    cout << ans + min(a, b) << endl;
  }
}
