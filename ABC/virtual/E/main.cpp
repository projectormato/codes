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
  int N;
  ll x, ans = 0;
  cin >> N >> x;
  ll a[N];
  rep(i, N){
    cin >> a[i];
  }

  ll ma = -1, mi = 1000000001;
  rep(i, N){
    ma = max(ma, a[i]);
    mi = min(mi, a[i]);
  }

  //全部買う
  if (ma <= x) {
    rep(i, N){
      ans += a[i];
    }
    cout << ans << endl;
    exit(0);
  }else{
    //1個買ってあと呪文
    ans = mi;
    rep(i, N-1){
      ans += mi;
      ans += x;
    }
    cout << ans << endl;
    exit(0);    
  }


}
