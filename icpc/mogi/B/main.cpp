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
  int N, L, R, ans = 0;
  cin >> N >> L >> R;
  int A[N];
  rep(i, N){
    cin >> A[i];
  }
  FOR(x, L, R+1){
    cout << x << endl;
    rep(i, N){
      if (x % A[i] == 0) {
        if (i % 2 == 1) ans +=1 ;
        continue;
      }
    }
    if (N % 2 == 0) ans += 1;
  }
  cout << ans << endl;
}
