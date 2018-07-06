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
  int n;
  while (true) {
    cin >> n;
    if (n == 0) {
      break;
    }
    int a[n], ans = 0;
    rep(i, n){
      cin >> a[i];
    }
    rep(i, n){
      ans = max(ans, a[i]);
    }
    cout << ans << endl;
  }
}
