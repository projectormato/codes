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
  while (true) {
    int n, sum = 0, ans = 0;
    cin >> n;
    int a[n];
    if (n == 0) break;
    rep(i, n){
      cin >> a[i];
      sum += a[i];
    }
    rep(i, n){
      if (sum/n >= a[i]) {
        ans += 1;
      }
    }
    cout << ans << endl;
  }
}