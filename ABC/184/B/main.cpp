#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int n, x;
  string s;
  cin >> n >> x >> s;
  rep(i, n) {
    if (s[i] == 'o') {
      x++;
    } else {
      if (x > 0) {
        x--;
      }
    }
  }

  cout << x << '\n';
}
