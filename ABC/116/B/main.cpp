#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int s;
  cin >> s;
  int a[10000];
  rep(i, 10000) {
    a[i] = 0;
  }
  a[s] = 1;
  FOR(i, 2, 1000002) {
    if (s % 2 == 0) {
      s /= 2;
    }else {
      s = s * 3 + 1;
    }
    if (a[s] == 0) {
      // cout << s << endl;
      a[s] = i;
    }else {
      cout << i << endl;
      exit(0);
    }
  }
}
