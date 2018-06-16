#include<bits/stdc++.h>
using namespace std;

#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define list_input(x, n) x[n]; rep(i,n){ cin >> x[i];}
#define ll long long

int main(){
  int N, M;
  cin >> N >> M;
  ll x[N], y[N], z[N], sum[N], result = 0, ans = 0;
  rep(i, N){
    cin >> x[i] >> y[i] >> z[i]; //入力受け取り
  }
  int d[2] = {1, -1};
  rep(j, 2){
    rep(k, 2){
      rep(l, 2){
        rep(i, N){
          sum[i] = x[i]*d[j] + y[i]*d[k] + z[i]*d[l];
        }
        sort(sum, sum+N, greater<ll>());
        rep(i, M){
          ans += sum[i];
        }
        result = max(result, ans);
        ans = 0;
      }
    }
  }
  cout << result << endl;
}
