#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  bool flag = true;
  int N;
  cin >> N;
  int x[N], y[N];
  ll h[N];
  rep(i, N){
    cin >> x[i] >> y[i] >> h[i];
  }
  int target = 0;
  rep(i, N){
    if (h[i] >= 1) {
      target = i;
      break;
    }
  }
  for (int i = 100; i >= 0; i--) {
    for (int j = 100; j >= 0; j--) {
      ll H = h[target] + abs(x[target]-i) + abs(y[target]-j);
      rep(k, N){
        ll a = 0;
        ll tyo = max(H - abs(x[k]-i) - abs(y[k]-j), a);
        if (tyo != h[k]) {
          flag = false;
          break;
        }
      }
      if (flag) {
        if (H != 0) {
          cout << i << " " << j << " " << H << endl;
          exit(0);
        }
      }else{
        flag = true;
      }
    }
  }
}
