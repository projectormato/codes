#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  int n, res = 0, min = 110;
  cin >> n;
  int h[n];
  rep(i, n) {
    cin >> h[i];
  }
  rep(i, n-1) {
    if (h[i] > h[i+1]) {
      res += h[i] - h[i+1];
    }
    if (min >= h[i]) {
      min = h[i];
    }
  }

  if (min >= h[n-1]) {
    min = h[n-1];
  }
  res += h[n-1] - min;
  cout << res + min << endl;
}
